/*1 – Faça um programa em que seja declarada uma matriz com 10 linhas e 10 colunas
(use #define linhas 10 e #define colunas 10).
O programa deve também:
a) preencher aleatoriamente a matriz com números inteiros entre 0 e 9.
b) exibir os elementos da matriz;
c) exibir a média dos elementos da diagonal principal;
d) exibir a média dos elementos da diagonal secundária;
e) exibir a média dos elementos acima da diagonal principal;
f) exibir a média dos elementos abaixo da diagonal principal;
 */



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define num 10

int main()
{
    int i,j,a[num][num],k1=0,k2=0,k3=0,k4=0;
    float soma1=0,media1,soma2=0,media2,soma3=0,media3,soma4=0,media4;
    srand(time(NULL));
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            a[i][j]=rand()%10;
            printf("%i ",a[i][j]);
            if(j==num-1){
                printf("\n");
            }
            if(i==j){
                soma1=soma1+a[i][j];
                k1++;
            }
            if(i+j==num-1){
                soma2=soma2+a[i][j];
                k2++;
            }
            if(j>i){
                soma3=soma3+a[i][j];
                k3++;
            }
            if(i>j){
                soma4=soma4+a[i][j];
                k4++;
            }
        }
    }
    media1=soma1/k1;
    printf("A media da diagonal principal eh:%.2f\n",media1);
    media2=soma2/k2;
    printf("A media da diagonal secundaria eh:%.2f\n",media2);
    media3=soma3/k3;
    printf("A media acima da diagonal princial eh:%.2f\n",media3);
    media4=soma4/k4;
    printf("A media abaixo da diagonal principal eh:%.2f\n",media4);

    return 0;
}
