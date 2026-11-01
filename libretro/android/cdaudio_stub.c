// CD32/CDTV audio decoders (libFLAC, libmpg123) are not in the NDK: stubs that report failure.
#include <stddef.h>
void* FLAC__stream_decoder_delete(){return 0;}
void* FLAC__stream_decoder_init_stream(){return 0;}
void* FLAC__stream_decoder_new(){return 0;}
void* FLAC__stream_decoder_process_until_end_of_metadata(){return 0;}
void* FLAC__stream_decoder_process_until_end_of_stream(){return 0;}
void* FLAC__stream_decoder_set_md5_checking(){return 0;}
void* FLAC__stream_decoder_set_metadata_respond(){return 0;}
void* mpg123_close(){return 0;}
void* mpg123_decode(){return 0;}
static const char* d[]={0}; const char** mpg123_decoders(void){return d;}
void* mpg123_delete(){return 0;}
void* mpg123_exit(){return 0;}
int mpg123_init(void){return -1;}
void* mpg123_new(){return 0;}
void* mpg123_open_feed(){return 0;}
