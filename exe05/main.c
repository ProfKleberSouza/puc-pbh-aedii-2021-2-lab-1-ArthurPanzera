#include <stdio.h>
#include "functions.h"
#include <string.h>

int main()
{
   char string[50];

   gets(string);

   printf("%s", reverse(string));

   return 0;
}