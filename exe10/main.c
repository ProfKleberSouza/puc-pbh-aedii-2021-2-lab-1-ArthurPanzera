#include <stdio.h>
#include "functions.h"

int main() {

    int a, b, s;
  
  // ENTRADA DE DADOS
  scanf("%d %d", &a, &b);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  s = somar(a, b);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("SOMA = %d\n", s);

  return(0);
}