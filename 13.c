#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Questao 3 do uri
int main(){
    char A[1000];
    char B[1000];
    int tamA=0,tamB=0;
    int i=0,m=0,j=0;
    scanf("%s",A);
    scanf("%s",B);
    tamA=strlen(A);
    tamB=strlen(B);
    for(i=tamA,j=tamB,m=0;m<=tamB;i--,j--,m++){
        if(B[j]!=A[i]){
            printf("\nNao encaixa");
            return 0;
        }
    }
    printf("\nEncaixa");
    return 0;
}