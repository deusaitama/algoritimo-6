/*2 – Faça um programa em que seja declarada uma matriz com 5 linhas e 8 colunas (use #define linhas
5 e #define colunas 8).
O programa deve também:
a) preencher aleatoriamente a matriz com números inteiros entre 0 e 999.
b) exibir os elementos da matriz;
c) exibir a mensagem: “O maior elemento da matriz é <Maior>”;
d) exibir a mensagem: “O menor elemento da matriz é <Menor>”;
e) exibir a mensagem: “O maior elemento da matriz está na linha <i> e coluna <j>”;
f) exibir a mensagem: “O menor elemento da matriz está na linha <i> e coluna <j>”;
 */



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define linha 3
#define coluna 5

int main()
{
    int a[linha][coluna],y=0,z=0,w=0,x=0,maior,menor;
    srand(time(NULL));
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            a[i][j]=rand()%1000;
            printf("%i ",a[i][j]);
            if(j==coluna-1){
                printf("\n");
            }
        }
    }
    maior=a[0][0];
    menor=a[0][0];

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            if(a[i][j]>maior){
                maior=a[i][j];
                y=i;
                z=j;
            }
            if(menor>a[i][j]){
                menor=a[i][j];
                w=i;
                x=j;
            }

        }
    }
    printf("\nO maior numero da matriz eh:%i, e se encontra na linha %i e coluna %i\n",maior,y+1,z+1);
    printf("O menor numero da matriz eh:%i, e se encontra na linha %i e coluna %i\n",menor,w+1,x+1);

    return 0;
}

