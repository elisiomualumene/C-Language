#include <stdio.h>

int main(void){
    int vetor10[10], vetor5[5], pvetor[10], svetor[10], i, i2, aux=0;

    // Seção de Comandos, procedimento, funções, operadores, etc...
   for (i = 1; i < 10; i++){
      printf("\nDigite o %d valor do vetor de 10 posições.", i);
      scanf("%d",&vetor10[i]);
    };
    

    for (i = 1; i < 5; i++){
      printf("\nDigite o %d valor do vetor de 5 posições.", i);
      scanf("%d", &vetor5[i]);
    };

    //ATRIBUIÇÃO DE VALORES PARA O PRIMEIRO VETOR RESULTANTE

   for (i = 1;i < 5; i++){
      aux = aux + vetor5[i];
    };

   for(i = 1; i < 10; i++){
       for(i2 = 1; i2 < 5; i2++){
      if(vetor10[i] % 2 == 0){
        pvetor[i] = vetor10[i] + aux;
       } else{
           if(vetor10[i] % vetor5[i2] == 0){
               svetor[i] = svetor[i] + 1;
             };
       };
       };
    };

   //ATRIBUIÇÃO DE VALORES PARA O SEGUNDO VETOR RESULTANTE

//    for(i= 1;i < 10; i++){
//       if(vetor10[i] % 2 == 1){
//          for(i2 = 1; i2 < 5; i2++){
//             if(vetor10[i] % vetor5[i2] == 0){
//                svetor[i] = svetor[i] + 1;
//              };
//             };
//         };
//     };

    //EXIBIÇÃO DO RESULTADO

   printf("\nPrimeiro vetor resultante:");
   printf("\n(Soma de  cada numero par do primeiro vetor com todos do segundo.)");

   for(i = 1;i < 10; i++){
      if(pvetor[i] != 0){
         printf("\n%d",pvetor[i]);
        };
    };

   printf("\n");

   printf("\nSegundo vetor resultante:");
   printf("\n(Quantidade de divisores que cada numero impar no primeiro vetor tem no segundo vetor.)");

   for(i = 1; i < 10; i++){
      if (vetor10[i] % 2 == 1){
         printf("\n%d",svetor[i]);
       };
    };

    return 0;
};