#include <stdio.h>
#include "functions.h"

int main() {

  char texto[1000];
  fgets(texto, 1000, stdin);

  numero_vogais(texto);

  return(0);
}