#include <stdio.h>

static void printme(void)
{
    double f = 100.1;
    short s = 10;
    long l = 100;
    char *ptr = NULL;
    char *hello = "Hello, world";

    sprintf(ptr, "I should have allocated memory first!");
    printf("%p - %s\n", ptr, ptr);
}

int main(int argc, char *argv[])
{
    printme( );
}

