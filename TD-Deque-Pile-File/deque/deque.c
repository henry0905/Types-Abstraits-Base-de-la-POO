#include "deque.h"
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <assert.h>

/* Modélisation d'une cellule */
struct node_st {
    void * data;
    struct node_st *prev;
    struct node_st *next;
};

/* Modélisation d'une Deque */
struct deque_st {
    long size;
    struct node_st *head;
    struct node_st *queue;
};

t_deque init() {
    errno = 0;
    t_deque dq = (struct deque_st *)malloc(sizeof(struct deque_st));
    if (errno) {
        perror("Pb Allocation Deque ...\n");
        exit errno;
    }
    dq->size = 0;
    dq->head = NULL;
    dq->queue = NULL;
    return dq;
}

void insertHead(t_deque dq, void *el) {
    assert(dq != NULL);
    assert(el != NULL);
    struct node_st *cell = (struct node_st*)malloc(sizeof(struct node_st));
    if (errno) {
        perror("Pb Allocation cellule ...\n");
        exit errno;
    }
    cell->data = el;
    cell->prev=NULL;
    cell->next=dq->head;
    if(dq->head == NULL){
        dq->head = cell;
        dq->queue = cell;
    } else {
        dq->head->prev = cell;
        dq->head = cell;
    }
    dq->size++;
}

void insertQueue(t_deque dq, void *el) {
    assert(dq != NULL);
    assert(el != NULL);
    struct node_st *cell = (struct node_st*)malloc(sizeof(struct node_st));
    if (errno) {
        perror("Pb Allocation cellule ...\n");
        exit errno;
    }
    cell->data = el;
    cell->prev=dq->queue;
    cell->next=NULL;
    if(dq->queue == NULL){
        dq->queue = cell;
        dq->head = cell;
    } else {
        dq->queue->next = cell;
        dq->queue = cell;
    }
    dq->size++;
}

void * removeHead(t_deque dq){
    assert(dq!=NULL);
    assert(dq->size!=0);
    struct node_st *cell = dq->head;
    void *val = cell->data;
    dq->head = cell->next;
    if (dq->head != NULL) {
        dq->head->prev = NULL;
    } else {
        dq->queue = NULL;
    }
    free(cell);
    dq->size--;
    return val;
}

void * removeQueue(t_deque dq){
    assert(dq!=NULL);
    assert(dq->size!=0);
    struct node_st *cell = dq->queue;
    void *val = cell->data;
    dq->queue = cell->prev;
    if (dq->queue != NULL) {
        dq->queue->next = NULL;
    } else {
        dq->head = NULL;
    }
    free(cell);
    dq->size--;
    return val;
}



void printDeque(const t_deque dq, void (*printElem)(void *)) {
    if (dq->head != NULL) {
        struct node_st *iter = dq->head;
        printf("(size = %ld)H->",dq->size);
        do {
            printElem(iter->data);
            iter = iter->next;
            if (iter != NULL) {
                printf("-");
            }
        } while(iter != NULL);
        printf("<-Q\n");
    }
}


