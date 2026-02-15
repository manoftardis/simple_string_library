#ifndef _SSTRING_H_
#define _SSTRING_H_

#ifndef SAPI
	#define SAPI //useful for later one if I want to specify that the libary needs to be built as a shared libray otherwise extern by default
#endif 

//-----------------------------------------------------------------------------------
//Types and Structure definitions
//-----------------------------------------------------------------------------------

#include <stddef.h>

typedef struct StrBuf {
	char* data;
	size_t size;
} StrBuf;

typedef struct String {
	size_t capacity;
	size_t size;
	char* data;
} String;

//-----------------------------------------------------------------------------------
//Function definitions
//-----------------------------------------------------------------------------------

SAPI void strbufcpy(StrBuf src, StrBuf dest);			//copies the string from src to dest until dest is full
SAPI void strbufncpy(StrBuf src, StrBuf dest, size_t num);	//copies the first n character from src to dest, dest will be null-terminated
SAPI void strbufcat(StrBuf src, StrBuf dest);			//concatenes the two strings, into dest
SAPI void strbufncat(StrBuf src, StrBuf dest, size_t num);	//append num characters from source to dest, and nullterminates dest
SAPI int strbufcmp(StrBuf src, StrBuf dest);			//compares the two strings
SAPI int strbufncmp(StrBuf src, StrBuf dest, size_t num);	//compares the first num characters of the two strings
SAPI size_t strbuflen(StrBuf buffer);				//returns the length of the string



#endif
