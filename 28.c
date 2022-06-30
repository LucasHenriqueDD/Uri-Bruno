#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define l 7
#define c 12
int main(){
	// QUESTAO 28 DE MATRIZES E VETORES...
    int matriz[l][c]; //linha ano, coluna mes
    int soma=0,i,j=0;
    int cmedio=0;
    float mesmedia=0;
    // Começando em 2003 ate 2010...
    srand(time(NULL));
    //gerando aleatorio pra matriz
    int e=0;
    for(int d=0;d<c;d++){
        matriz[e][d]=rand()%315;
        if(d==c-1){
            if(e==6){
                break;
            }
            e++;
            d=-1;
        }

    }
    for(i=0;i<l;i++){
        soma+=matriz[i][j];
        mesmedia=soma*1.0/7.0;
        if(i==l-1){
            printf("\nA media do mes %d foi de %2.f",j+1,mesmedia);
            if(j==11){
                break;
            }
            mesmedia=0;
            soma=0;
            i=-1;
            j++;
        }
    } 
    // Maior gasto com energia...
    int maior=0,guardal=0,guardac=0;
    for(int k=0;k<l;k++){
        for(int b=0;b<c;b++){
            if(matriz[k][b]>maior){
                maior=matriz[k][b];
                guardal=k;
                guardac=b;
            }
        }
    }
    printf("\nMaior gasto foi no mes: %d do ano %d e o valor foi de: %d",guardac+1,guardal+2003,maior);



    return 0;
}