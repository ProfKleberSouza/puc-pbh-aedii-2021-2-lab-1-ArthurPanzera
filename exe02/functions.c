#include "functions.h"

int menoor(int v[], int n, int *menor){

int men = v[0];

for(int i=0;i < n; i++){

  if (v[i] < men)
    men = v[i];

}

*menor = men;

}

