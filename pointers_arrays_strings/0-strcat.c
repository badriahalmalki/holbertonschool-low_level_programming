#include "main.h"

char *_strcat(char *dest, char *src)
{
    char *original_dest = dest; // Store the original start of dest

    // Find the end of the dest string
    while (*dest != '\0')
    {
        dest++;
    }

    // Append the src string to dest, overwriting the null byte
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    // Add the new terminating null byte
    *dest = '\0';

    return original_dest; // Return a pointer to the resulting string dest
}
