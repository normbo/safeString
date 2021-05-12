//safeString.h
#ifndef safe_string_hpp
#define safe_string_hpp

void safe_strcpy( char *dest, size_t dlen, const char *src, size_t slen );
void safe_strcat( char *dest, size_t dlen, const char *src, size_t slen );
void safe_comma_more( char *dest, size_t dlen, const char *src, size_t slen ); 

#endif
