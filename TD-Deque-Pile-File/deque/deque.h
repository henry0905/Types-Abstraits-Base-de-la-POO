#ifndef DEQUE_H_
#define DEQUE_H_

typedef struct deque_st * t_deque;

/*
* Initialisation mémoire d'une Deque
*
* return : une deque vide
*/
t_deque init();

/*
* Ajoute un élément en Tete
*
* param dq, (in out) Deque
* param el, (in) pointeur vers la donnée 
*/
void insertHead(t_deque dq, void *el);

/*
* Ajoute un élément en queue
*
* param dq, (in out) Deque
* param el, (in) pointeur vers la donnée 
*/
void insertQueue(t_deque dq, void *el);

/*
* Supprime un élément en tete
*
* param dq, (in out) Deque
*/
void * removeHead(t_deque dq);

/*
* Supprime un élément en queue
*
* param dq, (in out) Deque
*/
void * removeQueue(t_deque dq);



void printDeque(const t_deque dq, void (*printElem)(void *));

#endif