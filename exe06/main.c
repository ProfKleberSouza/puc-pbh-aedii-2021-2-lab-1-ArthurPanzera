#include <stdio.h>
#include "functions.h"
#include <stdlib.h>

int main()
{
  
    int num, pot,resultado=1;
    
    scanf("%d",&num);
    scanf("%d",&pot);
  
    potencia(num, pot);

    for(int i=0; i<pot; i++)
    {
        resultado *= num;
      
        if(pot == 0) 
        {
            resultado = 1;
        }
    }
  
    printf("\n%d\n",resultado);
   
  	return 0;
}