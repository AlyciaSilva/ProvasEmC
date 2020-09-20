#include <stdio.h>
int main(){
    float fatT, fatA, fatH, fatMedia, quantH, quantA, somaA, somaH; 
    float hdmi = 28.90, AdU = 49.90, maiorH = 0, menorH, maiorA = 0, menorA;
    int  dias;
    for (dias = 1; dias <= 30; dias++){
        printf ("Informe a quantidade de cabos HDMI e Adaptadores vendidos no dia %d:",dias);
        scanf ("%f%f", &quantH, &quantA);
        if (quantH >= 0  && quantH <=250 && quantA >= 0 && quantA <= 250){
            if (dias == 0) {menorA = quantA; menorH = quantH;}
            if (quantH > maiorH){maiorH = quantH;} // Quem é o maior de H
            if (quantA > maiorA){maiorA = quantA;} // quem é o maior de A
            if (quantH < menorH){menorH = quantH;} // menor de H
            if (quantA < menorA){menorA = quantA;} // menor de A
            somaA += quantA; 
            somaH += quantH;
        } else { printf ("\nO valor digitado é inválido!!!");} 
    }
    fatH = somaH * hdmi;  // fatura de H
    fatA = somaA * AdU; // fatura de A
    fatT = fatA + fatH; // fatura t
    fatMedia = fatT/30.0; // a média
    
    printf ("\nO faturamento total dos dois produtos foi: %.2f",fatT);
    printf ("\nOs maiores faturamentos em um dia dos cabos HDMI e Adaptadores foi: %.2f e %.2f", maiorH, maiorA);
    printf ("\nOs menores faturamentos em um dia dos cabos HDMI e Adaptadores foi: %.2f e %.2f", menorH, menorA);
    if (fatA < fatH) { // verificação de quem foi a maior fatura ou se foi igual
        printf ("\nO faturamento de cabos HDMI foi o maior com: %.2f e o faturamento médio de %.2f: ", fatH, fatMedia);
    } else if (fatA > fatH) {
        printf ("\nO faturamento de adaptadores foi o maior com: %.2f e o faturamento médio de %.2f: ", fatA, fatMedia);
    } else {
        printf ("Ambas espataram no faturamento com: %.2f e o faturamento médio de %.2f: ", fatH, fatMedia);
    } 
    return 0;
}
