#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *_strcat - entry point
 *@dest: pointer dest
 *@src: pointer src
 *Return: 0 succes
 */

char *_strcat(char *dest, char *src)
{
        int i = 0, j = 0;
        char *result = malloc(strlen(dest) + strlen(src) + 1);

        while (dest[i] != '\0')
        {
                result[j] = dest[i];
                i++;
                j++;
        }

        i = 0;

        while (src[i] != '\0')
        {
                result[j] = src[i];
                i++;
                j++;
        }

        i = 0;

        while (result[i] != '\0')
        {
                dest[i] = result[i];
                i++;
        }
        dest[i] = '\0';

        return (dest);
}
