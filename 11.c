#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vazio.h"
//Questao 4 do uri bruno
int main(){
    char alfa[27]="abcdefghijklmnopqrstuvwxyz";
    char palavra[200];
    int contador[27];
    for(int b=0;b<27;b++){
        contador[b]=0;
    }
    int n1,i,k,j,tam=0,maior=0,a=0;
        gets(palavra);
        tam=strlen(palavra);
        for(k=0;k<tam;k++){
            for(j=0;j<27;j++){
                if(palavra[k]==alfa[j]){
                    contador[j]++;
                    break;
                }
            }
        }
    for(i=0;i<27;i++){
        if(contador[i]>maior){
            maior=contador[i];
        }
    }
    for(i=0;i<27;i++){
        if(maior==contador[i]){
            printf("%c",alfa[i]);
        }
    }


    return 0;
}