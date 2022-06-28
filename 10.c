#include <stdio.h>
#include <stdlib.h>
//questão 9 do uri...
int main(){
    int n1,i,k,aux=0,j,m,mala=0,contador=0;
    int v[20];
    int d[20];
    scanf("%d",&n1);
    for(i=0;i<n1;i++){
        scanf("%d",&v[i]);
    }
    for(k=0;k<n1;k++){
        for(j=k+1;j<n1;j++){
            if(v[k]>v[j]){
                aux=v[k];
                v[k]=v[j];
                v[j]=aux;
            }
        }
    }
    for(;mala<n1;mala++){
        for(k=0;k<n1;k++){
            if(v[mala]==v[k]){
                contador++;
            }
            if(k==n1-1){
                printf("\nO numero %d apareceu %d vezes",v[mala],contador);
                mala+=contador-1;
                contador=0;
            }
        }

    }
    return 0;
}