#include <moca.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *buffer;
    
    buffer = (char *) calloc(5, sizeof(char));
    /* OOPS - Writing too many bytes into buffer. */ 
    strcpy(buffer, "Hello, world");
    free(buffer);

    buffer = (char *) calloc(20, sizeof(char));
    strcpy(buffer, "Hello, world");
    /* OOPS - Forgot to free buffer. */
}

