#include<stdio.h>

int main(void){
    int N = 0, P = 0; 
    int vetor[10] = {-1, 2, 20, -23, 49, 50,-39,29,15,18};

    for(int i = 0; i < 10; i++){
        
        if(vetor[i] < 0){
            N++;
            printf("\n%d Negativo", vetor[i]);
        };

        if(vetor[i] > 0){
            P++;
            printf("\n%d Positivo", vetor[i]);
        };
    };
    printf("\n existem %d numeros Negativos", N);
    printf("\n existem %d numeros Positivos", P);
    return 0;
}