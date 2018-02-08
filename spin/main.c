#include <stdio.h>

static void findchar(char *haystack, char needle)
{
    char *ptr = haystack;

    printf("Looking for '%c' within '%s'...\n", needle, haystack);

    while (*ptr)
    {
        if (needle == *ptr)
        {
            printf("Found it\n");
            return;
        }

        /* OOPS - Forgot to increment ptr to the next character. */
    }

    printf("Could not find it\n");
}

int main(int argc, char *argv[])
{
    findchar("Hello, world", 'x');
}

