#include "functions.h"
#include <string.h>
#include <stdio.h>

void numero_vogais(char texto[]){
  
  int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;

  for(int i=0;i<strlen(texto);i++){

    if(texto[i] == 'a' || texto[i] == 'A'){
      contA++;
    }

    if(texto[i] == 'e' || texto[i] == 'E'){
      contE++;
    }

    if(texto[i] == 'i' || texto[i] == 'I'){
      contI++;
    }

    if(texto[i] == 'o' || texto[i] == 'O'){
      contO++;
    }

    if(texto[i] == 'u' || texto[i] == 'U'){
      contU++;
    }

  }

  printf("A = %d\n", contA);
  printf("E = %d\n", contE);
  printf("I = %d\n", contI);
  printf("O = %d\n", contO);
  printf("U = %d\n", contU);


}
