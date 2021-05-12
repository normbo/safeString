#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

#include "safeString.h"


int main()
{
    char chTemp[32]; 
    safe_strcpy( chTemp, sizeof(chTemp), "hello", 12 ); 
    safe_strcat( chTemp, sizeof(chTemp), "world", 12 ); 
    
    //printf("Hello World");
    printf("%.32s\n", chTemp); 

    safe_strcpy( chTemp, sizeof(chTemp), "hello", 12 ); 
    comma_more( chTemp, sizeof(chTemp), "world", strlen("world") );  
    printf("%.32s\n", chTemp); 


    return 0;
}
