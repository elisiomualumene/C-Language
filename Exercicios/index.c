#include<stdio.h>

//Faça um algoritmo que leia um vetor de 15 posicoes de numeros inteiros e divida todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os Calculos;

int main(void){
    int vetor[15];

    for(int i = 0; i < 15; i++){
        printf("Digite o valor do vetor na posicao %d",i);
        scanf("%d", &vetor[i]);
    };
    return 0;
}