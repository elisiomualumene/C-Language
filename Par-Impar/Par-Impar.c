#include <stdio.h>

int main(){
    
    int vetor[6];

    printf(" Digite os numeros ");

    for(int i = 0; i < 6; i++){

        scanf("%d", &vetor[i]);
        printf("\n O numero digitado e %d", vetor[i]);

        if(vetor[i] % 2 == 0){
            printf("\n O numero %d e PAR ", vetor[i]);
        }
        else{
            printf("\n O numero %d e IMPAR ", vetor[i]);
        };
        printf("%d", pares[i]);
    };

    return 0;
}