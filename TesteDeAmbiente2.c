#include <stdio.h>
int main(){
    float alt, soma = 0, media;
    int cont = 100, i;
    for (i = 0; i < cont; i++){
        printf ("\n escreva sua altura: ");
        scanf ("%f",&alt);
        soma = soma + alt;
    }
    media = soma/cont;
    printf ("\nA media das alturas é: %.2f",media);
    return 0;
}