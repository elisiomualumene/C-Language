#include<stdio.h>

int main(void){
     
    char nomes[2][9];

    for(int i = 0; i < 2;i++){
        for(int j = 0; j < 61; j++){
            scanf("%c %d", nomes[i][j]);
            printf("\n");
            printf("%c %d", nomes[i][j]);
        };
    };

    return 0;
}