#include <stdio.h>

int main()
{
    float array[5][5], soma = 0, input;
    int linha, coluna;
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            do {
                printf("[%d][%d]-->", linha, coluna);
                scanf("%f", &input);
            } while (input < 0 || input > 10);
            array[linha][coluna] = input;
        }
    }
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if (linha < coluna)
                soma += array[linha][coluna];
            printf("%f ", array[linha][coluna]);
        }
        printf("\n");
    } 

    printf("Soma: %f", soma);
    return 0;
}