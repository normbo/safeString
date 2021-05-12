
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

void safe_strcpy( char *dest, size_t dlen, const char *src, size_t slen )
{ 
   if ( dlen ) {
       memset(dest, 0, dlen );
       dlen--;     // leave room for null char.
       size_t z = dlen; 
       if ( slen < z )
            z = slen; 
       for (; (z) && (*src) ; z--, src++)
             *dest++ = *src; 
   }
} 

void safe_strcat( char *dest, size_t dlen, const char *src, size_t slen )
{ 
      for (; dlen; dest++, dlen--)
            if ( !* dest )
                  break; 
      safe_strcpy( dest, dlen, src, slen ); 
} 

// add ,more to the dest if you need a comma.
void comma_more( char *dest, size_t dlen, const char *src, size_t slen ) 
{ 
      if ( (dlen) && (slen) ) { 
        if (*dest) {
            safe_strcat( dest, dlen, ",", 1); 
            dlen--; 
            safe_strcat( dest, dlen, src, slen ); 
        }
      } 
} 
