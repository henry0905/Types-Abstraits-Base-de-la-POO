#include <stdio.h>
#include <stdlib.h>
/*déclaration de la fonction fact */
int fact(const int n);

int main(int argc, char *argv[]){
    int n;
    int r;
    /* récupération des paramètres d'appel du programme */
    if(argc<2){
        printf("Paramètre(s) manquant");
        return -1;
    }
    n = atoi(argv[1]);
    /* appel de la fonction fact */
    r = fact(n);
    printf("n! = %d\n",r);
    return 0;
}

/* implementation de la fonction fact */
int fact(const int n){
    int i ;
    int res=1;   
    for(i=1;i<=n;i++){
        res = res*i;
    }
    return res;
}