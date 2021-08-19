#include <stdio.h>
#include "functions.h"

int main(){
  
  int v[1000];
  int n;
  int menor = 0;

  scanf("%d", &n);

  for(int i=0;i<n; i++)
    scanf("%d", &v[i]);

  menoor(v, n, &menor);

  printf("MENOR = %d\n", menor);
  
  return(0);
}