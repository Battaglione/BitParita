#include <stdio.h>
#include <stdlib.h>
#define MAX 8
int main(){
    int bin, cont1, cont2, par = 0;
    for(cont1 = 0; cont1 < MAX; cont1++){
        do{
            printf("Inserire una cifra binaria\n");
            scanf("%d",&bin);
        }while(bin < 0 || bin > 1);

        if(bin == 1){
            cont2++;
        }
    }

    par = cont2 % 2;

    if(par == 0){
        printf("Il numero di bit e' pari\n");
    }

    else{
        printf("Il numero di bit e' dispari\n");
    }
}