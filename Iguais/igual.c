#include<stdio.h>

int main(void){
    int vetor[15] = {2,4,8,10,15,29,20,30,40,50,60,30,50,90,42};

    for(int i = 0; i < 15; i++){
        if(vetor[i] == 30){
            printf("\nexiste um numero 30 na posicao %d", i);
        };
    };
    return 0;
}