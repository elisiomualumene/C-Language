#include <stdio.h>
#include <stdlib.h>


int main(){

    int a, maior=0, menor=0,soma=0;
    int Notas[10];

    printf("digite 10 notas");
    printf("\n");
    
    for (a=0;a<10;a++){
      
      printf("nota %d : ", a+1);

      scanf("%d", &Notas[a]);
      if(a==0){maior=Notas[a];menor=Notas[a];}
      if(Notas[a]>maior){
        maior=Notas[a];
      }
      else{
        if(Notas[a]<menor){
            menor=Notas[a];
        }
      }
    }

     for(int i = 0; i< 10; i++){
       if(Notas[i] % 2 == 0){
           soma = soma + Notas[i];
       };
     };

    printf("\nA Soma e %d",soma);
    printf("\no maior valor e %d\n", maior);
    printf("\ne o menor valor e %d\n\n", menor);
    printf("\nO maior multiplicado pelo menor e %d", maior*menor);
    system("pause");
    return 0;
}