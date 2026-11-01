#pragma once
// Functions bionic lacks (valloc, execinfo backtrace), force-included for platform=android.
#include <stdlib.h>
#include <malloc.h>
static inline void *valloc(size_t n) { return memalign(4096, n); }
static inline int backtrace(void **b, int n) { (void)b; (void)n; return 0; }
static inline char **backtrace_symbols(void *const *b, int n) { (void)b; (void)n; return (char **)calloc(1, sizeof(char *)); }
