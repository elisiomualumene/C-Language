/*
Faça um programa que receba o total das vendas de cada vendedor e armazene-asem um vetor.Receba também o percentual de cada vendedor e armazene-os em outro vetor. Receba os nomes desses vendedores e armazene-os em um terceiro vetor Existem apenas 10 ventedores, Calcula e mostra

a - O total das vendas de totd
*/

#include<stdio.h>

int main(void){
    int nomevendedores[10],maiorvend,menorvend; //,maiorvend,menorvend;

    int totalvendas[10],totalvendas1 = 0; //,totalvendas1[10]

    int valor[10],perccomissao[10],menorvalor,maiorvalor; //,menorvalor,maiorvalor
//valor[10]
    printf("\n---------AREA DE INSERCAO DOS DADOS DE CADA VENDEDOR------- ");

    for (int I =1; I < 3; I++){
      printf("\n----------------------------------------- ");
      printf("\nDigite o nome do %d vendedor ", I);
      scanf("%d", &nomevendedores[I]);
      
      printf("\nDigite o total de vendas do vendedor: %c",nomevendedores[I]);
      scanf("%d", &totalvendas[I]);
      
      printf("\nDigite o valor do percentual de comissao, a que este vendedor tem direito ");
      scanf("%d", &perccomissao[I]);
      //system("cls");
    };


    printf("\n---------------RESPOSTA AS QUESTOES----------- ");
    printf("\n--Relatorio com os nomes dos vendedores e os valores a receber referentes a comissa o---- ");
   
    printf("\nNome do vendedor-----------------Valor da Comissao ");

    for (int I = 1; I < 3; I++){
      printf("\n\t\t\t\t\tR$ %d",(totalvendas[I] * perccomissao[I])/100);
     // valor[I] = totalvendas[I] * perccomissao[I]/100;
    };

//AQUI

    printf("\n************************************************");

    printf("\nO total das vendas de todos os vendedores foi:");

      for(int i=1; i < 3; i++){
      printf("\n%d",(totalvendas1+totalvendas[i]));
      };
   
    printf("\n************************************************");
   //c) o maior valor a receber e o nome de que o receberá;
   //d) o menor valor a receber e o nome de quem o receberá;

//AGORA AQUI
   maiorvalor = valor[1];
   menorvalor = valor[1];
   maiorvend = nomevendedores[1];
   menorvend = nomevendedores[1];

//tem um bug aqui 

    for (int I = 1;I < 3 ; I++){

      if (valor[I] > maiorvalor){
         maiorvalor = valor[I];
         maiorvend = nomevendedores[I];
        };

      if (valor[I]<menorvalor){
         menorvalor = valor[I];
         menorvend = nomevendedores[I];
      };
    };

   //c) o maior valor a receber e o nome de que o receberá;

   printf("\n----O MAIOR VALOR E O NOME DO VENDEDOR---");

   printf("\nR$ %d - %d", maiorvalor, maiorvend);
   
   printf("\n************************************************");

   //d) o menor valor a receber e o nome de quem o receberá
   printf("\n----O MENOR VALOR E O NOME DO VENDEDOR---");

   printf("\nR$ %d - %d", menorvalor, menorvend);

    return 0;
}