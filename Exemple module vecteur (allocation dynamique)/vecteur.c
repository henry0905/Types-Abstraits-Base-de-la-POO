#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "vecteur.h"

struct vecteur {
    int dimension;
    double *vec;
};

void checkError(const int noer, char *mess){
    if (noer) {
        perror(mess);
        exit errno;
    }
}

T_vecteur createVecteur(const int dim){
    T_vecteur v;
    errno = 0;
    v = (struct vecteur *)malloc(sizeof(struct vecteur));
    checkError(errno,"Erreur allocation structure");
    v->dimension = dim;
    v->vec = (double *)calloc(dim,sizeof(double));
    checkError(errno,"Erreur allocation vec");
    return v;
}

void deleteVec(T_vecteur v) {
    errno = 0;
    if (v!=NULL){
        if (v->vec != NULL){
            free(v->vec);
        }
        free(v);
        v = NULL;
    } else {
        errno = ENOMEM;
    }
}