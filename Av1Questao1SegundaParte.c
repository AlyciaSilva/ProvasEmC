#include <stdio.h>
int main(int argc, char const *argv[]){
    int cont = 0, n,  resp;
    float m, c, i, JC, jir, result = 0;
    do{
    printf ("\nInforme o valor do capital, da taxa de juros e o tempo de aplicacao: ");
    scanf ("%f%f%d", &c, &i, &n);    
    if (i <= 0){
        do {
        printf ("\nInforme novamente o valor da taxa de juros: ");
        scanf ("%f", &i); 
        }while(i <= 0);}
    if (n <= 0){
        do {
        printf ("\nInforme novamente o tempo de aplicacao: ");
        scanf ("%f", &n); 
        }while(n <= 0);}
        result = ((1 + i) / 100)* ((1 + i)/ 100);
        while (cont < n - 2) {
        result = result * (1 + i / 100);   
        cont++;
    }
    m = c* result;
    JC = m - c;
    if (n < 6) {jir = JC * (100 - 22.5) / 100;} 
    if (n >= 6 && n <= 11) {jir = JC * (100 - 20) / 100;}
    if (n >= 12 && n <= 23) {jir = JC * (100 - 17.5) / 100;}
    if (n > 23) {jir = JC * (100 - 15) / 100;}
    printf ("\nO montante e %.2f e o juros compostos sao %.2f:",m ,JC);
    printf ("\nJuros com a incidencia de imposto de renda: %.2f",jir);
    printf ("\nDeseja continua? Sim-1 e Não-2: ");
    scanf ("%d",&resp);   
    } while (resp != 2);
    return 0;
}
