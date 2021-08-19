#include "functions.h"

void menor_maior(int v[], int n, int *menor, int *maior){

int mai = v[0];
int men = v[0];

for(int i=0;i < n; i++){

  if(v[i] > mai)
    mai = v[i];

  if (v[i] < men)
    men = v[i];

}

*maior = mai;
*menor = men;

}
