#include "functions.h"

int potencia (int num, int pot){

  int resultado = 1;
  
  for(int i=0; i<pot; i++)
    {
        resultado *= num;
      
        if(pot == 0) 
        {
            resultado = 1;
        }
    }

}
