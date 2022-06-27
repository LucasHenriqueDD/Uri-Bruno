#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Questao 6 do Uri bruno
int main(){
    char palavra[50];
    char escondido[20];
    int tam=0,i,j=0;
    gets(palavra);
    tam=strlen(palavra);
    for(i=0;i<tam;i++){
        if(palavra[i]==' '){
            escondido[j]=palavra[i+1];
            j++;
        }
    }
    escondido[j]='\0';
    printf("%c",palavra[0]);
    printf("%s",escondido);
    return 0;
}