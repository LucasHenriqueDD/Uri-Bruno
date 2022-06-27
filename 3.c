#include <stdio.h>
#include <stdlib.h>
//Questao 2 do uri...
int main(){
    int n1=0,i;
    int menor=0,guardap=-1;
    scanf("%d",&n1);
    int v[n1];
    for(i=0;i<n1;i++){
        scanf("%d",&v[i]);
    }
    //Achando o menor valor
    for(i=0;i<n1;i++){
        if(v[i]<menor){
            guardap=i;
            menor=v[i];
        }
    }
    printf("Menor Valor: %d\n",menor);
    printf("Posicao: %d\n",guardap);
    return 0;
}