#include <stdio.h>
int main(){
    int pessoas, i, soma = 0, cont = 20;
    for (i = 0; i < cont; i++){
        printf ("Digite sua idade: ");
        scanf ("%d",&pessoas);
        if (pessoas >= 18 && pessoas<=35){ soma++;}
    }
    printf ("O total de pessoas entre 18 e 35 é: %d",soma);
    return 0;

}