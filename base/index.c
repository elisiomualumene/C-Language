//Faça um algoritmo que leia um vetor de 15 posicoes de numeros inteiros e divida todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os Calculos;

#include<stdio.h>

int main(void){
    int vet1[15], vet2[15], i,maior;

    for(i=1; i < 15; i++){
      printf("\nDigite o %d valor", i);
      scanf("%d", &vet1[i]);
    };

   maior = vet1[1];

   for(i=1;i < 15;i++){
      if(vet1[i] > maior){
         maior = vet1[i];
      };
    };

   for(i = 1;i < 15; i++){
      vet2[i] = vet1[i]/maior;
    };

   printf("\n----------------------------");
   printf("\nO maior valor encontrado foi: %d",maior);
   printf("\n------------------------------");
   printf("\nLista do novo vetor");
   
   for(i =1;i < 15; i++){
      printf("\n%d",vet2[i]);
    };
    return 0;
}