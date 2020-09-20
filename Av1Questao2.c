#include <stdio.h>
int main(int argc, char const *argv[]){
    int n1,n2,n3;
    printf ("É um triângulo? Descubra adicionando os 3 numeros: ");
    scanf ("%d%d%d",&n1,&n2,&n3);
    if (n1 > 0 && n2 > 0 && n3 > 0){
        if (n1 < n2+n3 && n2 < n1+n3 && n3 < n1+n2){    
            if (n1 == n2 && n1 == n3 && n2 == n3 ){ printf ("É um triângulo e é equilatero!!");}
            if ((n1 == n2 && n1 != n3) || (n1 != n2 && n2 == n3) && (n1 == n3 && n3!= n2)){ printf ("É um triângulo é isosceles!!");}
            if (n1 != n2 && n1 != n3 && n2 != n3){ printf ("É um triângulo e é escaleno!!");}
        } else { printf ("Não é um triângulo!");}   
    }else { printf ("\n Número inválido!!!Digite um valor maior que 0");}
    
    return 0;
}
