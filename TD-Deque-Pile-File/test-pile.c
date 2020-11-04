#include <stdio.h>
#include "pile.h"

#include <stdlib.h>

void printEntier(void *v){
    printf("%d",*((int *)v));
}

int main(int argc, char *argv[]){
    t_pile pile;
    int val =44;
    int val2 = 4;
    int val3 = 5;
    pile = initPile();
    
    empile(&val,pile);
    empile(&val2,pile);
    empile(&val3,pile);
    printPile(pile,printEntier);
    printf("depile %d ...\n",*((int *)depile(pile)));
    printf("depile %d ...\n",*((int *)depile(pile)));
    printPile(pile,printEntier);
    empile(&val3,pile);
    printPile(pile,printEntier);
    printf("depile %d ...\n",*((int *)depile(pile)));
    printf("depile %d ...\n",*((int *)depile(pile)));
    /* Test assertion
    printf("depile %d ...\n",*((int *)depile(pile)));
    */
    printPile(pile,printEntier);
    return 0;
}