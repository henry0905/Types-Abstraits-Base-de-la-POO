#include <stdio.h>
#include "vecteur.h"

int main(int argc, char *argv[]){
    
    T_vecteur v;
    v = createVecteur(3);
    printf("Dim vecteur %d :",v->dimension);

    return 0;
}