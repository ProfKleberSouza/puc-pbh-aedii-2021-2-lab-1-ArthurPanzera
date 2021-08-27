#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char reverse(char string[])
{
   int length, i;

   length = strlen(string);

   char reverse_string[length];

   for(i=0; i<length; i++)
   {
      reverse_string[i] = string[(length - i) - 1];
   }

   return reverse_string;
}