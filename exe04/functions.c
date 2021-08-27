#include "functions.h"

void numero_vogais(char texto[]){
  
  char vogais[] = "aeiouAEIOU";
  int numVogais = 0;

  for(int i = 0;texto[i] != '\0';i++){
    for(int j = 0;vogais[j] != '\0'; j++){
      if(vogais[j] == texto[i]){
        numVogais++;
        break;
      }
    }
  }

  return numVogais;

}
