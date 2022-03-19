//programa de criptografia 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define tam 25

typedef struct{
        char palavra[tam];
}dados;

//void criptografa(dados cripto);

int main (){

    dados nome; 
    criptografa(nome);

    system("pause");
    return 0;

}


void criptografa(dados cripto){
     printf("Informe o nome do aluno: ");
     gets(cripto.palavra);


    for(int i = 0 ; i < strlen(cripto.palavra) ; i++){
          if(cripto.palavra[i] == 'a'){
                        cripto.palavra[i] = 'f';
            }
            
           else  if(cripto.palavra[i] == 'e'){
                          cripto.palavra[i] = 'i';
            }
           	else if (cripto.palavra[i] == 'i'){
			cripto.palavra[i] = 'b';
        }
             else {
                  cripto.palavra[i] = cripto.palavra[i] + 3 ; 
                  }
            }

            for(int i = 0 ; i < strlen(cripto.palavra); i++){
            	putchar(cripto.palavra[i]);
}            printf("\n");
             for(int i = 0 ; i < strlen(cripto.palavra); i++){
             printf(" %d",cripto.palavra[i]);

}            

            printf("\n");

}


// void descriptografar(dados cripto){

// }