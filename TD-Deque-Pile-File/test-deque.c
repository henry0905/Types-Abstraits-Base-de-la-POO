#include <stdio.h>
#include <stdlib.h>
#include "deque.h"


void printEntier(void *v){
    printf("%d",*((int *)v));
}

int main(int argc, char *argv[]) {
    int val1 = 4;
    int val2 = 44;
    int val3 = 5;
    int val4 = 55;
    int *val_ptr = (int *)malloc(sizeof(int));
    *val_ptr = 12;
    t_deque deque;
    deque = init();
    insertHead(deque, &val1);
    insertHead(deque, &val2);
    printDeque(deque,printEntier);
    insertQueue(deque,&val3);
    insertQueue(deque,&val4);
    insertHead(deque,val_ptr);
    printDeque(deque,printEntier);
    printf("remove %d ...\n",*((int *)removeHead(deque)));
    printf("remove %d ...\n",*((int *)removeHead(deque)));
    printf("remove %d ...\n",*((int *)removeHead(deque)));
    printf("remove %d ...\n",*((int *)removeHead(deque)));
    printf("remove %d ...\n",*((int *)removeHead(deque)));
    /* Pour tester assertion
    printf("remove %d ...\n",*((int *)removeHead(deque)));
    */
    printDeque(deque,printEntier);
    insertHead(deque, &val1);
    insertHead(deque, &val2);
    insertQueue(deque,&val3);
    insertQueue(deque,&val4);
    insertHead(deque,val_ptr);
    printDeque(deque,printEntier);
    printf("remove %d ...\n",*((int *)removeQueue(deque)));
    printf("remove %d ...\n",*((int *)removeQueue(deque)));
    printf("remove %d ...\n",*((int *)removeQueue(deque)));
    printDeque(deque,printEntier);
    return 0;
}