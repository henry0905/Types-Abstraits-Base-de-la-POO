#ifndef VECTEUR_H_
#define VECTEUR_H_

typedef struct vecteur * T_vecteur;


T_vecteur createVecteur(const int dim);

void deleteVec(T_vecteur v);

#endif