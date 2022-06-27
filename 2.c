#include <stdio.h>
#include <stdlib.h>
//Questao 1 do URI BRUNO
void imprime(int v[],int contador,int indica){
    int i;
    if(indica==0){
  for(i=0;i<contador;i++){
    printf("par[%d] = %d\n",i,v[i]);
  }
  }
  else{
    for(i=0;i<contador;i++){
    printf("impar[%d] = %d\n",i,v[i]);
  } 
  }
}

int main(){
    int c,n1=0;
    int in1=0,pn1=0;
    int p[5];
    int i[5];
    for(c=0;c<15;c++){
        scanf("%d",&n1);
        if(n1%2!=0){
            i[in1]=n1;
            in1++;
        }
        if(n1%2==0){
            p[pn1]=n1;
            pn1++;
        }
        if(in1==5){
            imprime(i,in1,1);
            in1=0;
        }
        if(pn1==5){
            imprime(p,pn1,0);
            pn1=0;
        }
    }
    imprime(i,in1,1);
    imprime(p,pn1,0);
    return 0;
}