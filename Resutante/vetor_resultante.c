#include <stdio.h>
#include <stdlib.h>

int mat1[6], mat2[6];

int main(void){

    for(int i=0 ; i<5; i++){

        printf("DIGITE AS MATRICULAS DOS ALUNOS DE LOGICA DE PROGRAMACAO: ");
        scanf("%d", &mat1[i]);
    };

    printf("\n");

    for(int i=0; i<5; i++){

        printf("DIGITE AS MATRICULAS DOS ALUNOS DE LINGUAGEM DE PROGRAMACAO: ");
        scanf("%d", &mat2[i]);
    };

    printf("n\");

    for(int i=0; i<5; i++){

    for(int a=0; a<5; a++){
        if(mat1[i] == mat2[a]){ 
            printf("AS MATRICULAS IGUAIS SAO: %d\n", mat1[i]);
    };
    };
};
return 0;
}