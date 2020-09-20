#include <stdio.h>
int main(int argc, char const *argv[])
{
    int dia, mes, ano;
    printf ("Insira 3 numeros inteiros: ");
    scanf ("%d%d%d", &dia, &mes, &ano);
    if (dia <= 31 && dia > 0 && mes <= 12 && mes > 0){
        printf ("\n E um ano.");
        if (ano % 400 == 0 || ano % 4 == 0){ printf ("\nO ano e bissexto!!!"); }
        if (ano % 100 == 0){printf ("\nO ano nao e bissexto!!!"); }
    } else {
        printf ("\nData inaválida!!!");
    }
    
    return 0;
}
