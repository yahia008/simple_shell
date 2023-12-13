#include "utils_shell.h"

/**
 * _srt - compare two strings
 * @s1: a pointer to comapare
 * @s2: the second pointhe
 * Returns: a pointer
*/

int _srt( char *s1, const char *s2)
{
      int i;
      for (i=0; s1[i]!='\0' || s2[i]!='\0'; i++)
      {
            if (s1[i] != s2[i])
            {
                  return 1;
                  break;
            }

      }
   return 0;

}

/**
 * concat - combines two strings
 * dest: desination
 * src: sources of string
 * Return: restusns a pointer
*/

char *concat(char *dest, const char *src)
{
   size_t i=0, j=0;

   while (dest[i] !='\0')
   {
      i++;
   }

   while (src[j] != '\0')
   {
      dest[i] = src[j];
      i++;
      j++;
   }

   dest[i] = '\0';
   return dest;
}
