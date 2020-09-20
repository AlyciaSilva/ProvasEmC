#include <stdio.h>
#include <math.h>
int main(){
   char estacao [3][31];
   int a1, a2, et [3], ty [3]; 
   int x,y, resp, cont, menorx, menory;
   float dE, final,d1, menorD, raiz, mediaD = 0;
   
   for (x = 0; x < 3; x++) {
        printf ("\nInforme o nome das estacoes:");
        gets (estacao [x]);
        fflush(stdin);
        do{
            printf ("\n informe a posicao X e Y no mapa:");
            scanf ("%d%d", &et[x], &ty[x]);
            fflush(stdin); 
        }while (et [x] < 0 || et [x] > 100 || ty [x] < 0 || ty [x] > 100);
   }
   do{
       printf ("\ncordenada do incidente: ");
       scanf ("%d%d",&a1,&a2);
       fflush (stdin);
       for (x = 0; x < 3; x++) {
            for (y = 0; y < 3; y++){
                dE = (et [x] + a1) * (et [x] + a1);
                d1 = (ty [y] + a2) * (ty [y] + a2);
                final = d1 + dE;
                raiz = sqrt (final);
                if (x == 0) { menorD = raiz; }
                if (raiz<menorD){ 
                    menorD = raiz;
                    menorx = x;
                    menory = y;
                    }
                mediaD += raiz;     
            }  
        }    
        printf ("\nA menor distancia foi: %.2f da estacao: %s", menorD, estacao[menorx][menory]);    
        printf ("\ndeseja repetir 1- sim e 0-nao ");
        scanf ("%d",&resp);    
        cont++;
        fflush(stdin);
   } while (resp != 0);
    printf ("\nAs medias das distancias foram %.2f",mediaD/2);
    return 0;
}