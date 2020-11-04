#ifndef PILE_H_
#define PILE_H_

#include "deque.h"

typedef struct deque_st *t_pile;

/*
* Initialisation mémoire d'une Deque
*
* return : une deque vide
*/
t_pile initPile();


void empile(void * elem, t_pile pile); 

void * depile(t_pile pile);

void printPile(const t_pile pile, void (*printElem)(void *));

#endif