#include <stdio.h>
#include <stdlib.h>

main(){
    //system("clear");
    char arquivo[20];
    int x;
    printf("Digite o nome do Arquivo: ");
    scanf("%s", &arquivo);

    // c = c - 1
    //c = c + 1
    //  x = 20;

    for(x=0;x< strlen(arquivo);x++)
    if(arquivo[x] = 'a'){
        arquivo[x] = 'c';

        if(arquivo[x] = 'e'){
        arquivo[x] = 'f';
    }
    }


    if(arquivo[x] = 'i'){
        arquivo[x] = 'd';
    }

    if(arquivo[x] = 'o'){
        arquivo[x] = 'i';
    }

    if(arquivo[x] = 'u'){
        arquivo[x] = 'g';
    }
    printf(">> Arquivo Gerado: %s\n\n ", arquivo);
   
}