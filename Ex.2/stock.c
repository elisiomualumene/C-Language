#include <stdio.h>
#include <stdlib.h>
int codp[3],prod[3],codc[3],i,j,qnt_soli,cod,opcao,opc;

int menu (void){                    /* menu */
        printf("\n\t\t <*> MENU <*> ");        
        printf("\n\t 1- cadastro de produtos ");
        printf("\n\t 2- pedido do cliente ");                
        printf("\n\t 3- estoque ");
        printf("\n\t 4- sair ");      
        scanf("%d",&opc);
        system("cls");
        return(opc);
      }

int cadastro(){                      /* função cadastro*/  
    for(i=1;i<=3;i++){    
     printf("\n\t\t <*> CADASTRO DE PROODUTOS <*>");                      
     printf("\n digite o codigo do produto");
     scanf("%d",&codp[i]);
     printf(" digite a quntidade do produto ");
     scanf("%d",&prod[i]);
    // system("cls");
    }      
  }

  int pedido(){                 /*função pedido cliente */
    for(i=1;i<=1;i++){
       printf("\n\t\t <> PEDIDO DO CLIENTE <> ");                      
       printf("\n\t Digite o codigo do cliente ");
       scanf("%d",&codc[i]);
       printf("\n Digite o codigo do produto pedido ");
       scanf("%d",&cod);
     }  
        for(i=1;i<=3;i++){          
         if(cod==codp[i]){
           printf("\t <*> codigo cadastrado !!! ");
           printf("\n digite  quantidade solicitada ");
           scanf("%d",&qnt_soli);                      
            if (qnt_soli<=prod[i]){
               prod[i]=prod[i]-qnt_soli;
               printf(" Pedido atendido ");              
              }
           }              
         else{
          printf("\n Nao temos estoque suficiente desta mercadoria ");
          }
         //system("cls");                  
       6;
   }      
}  
                                        //Aqui encontra-se a funcao para verificar o estoque
int estoque (){
       printf(" ::CODIGO::    ::QUANTIDADE:: ");  
       for(i=1;i<=3;i++){                            
         printf("\n %d -  %d",codp[i],prod[i]);      
       }        
}

int main(void){
       opcao=menu();
       while(opcao!=4){
        if (opc==1){
           cadastro();
           opcao=menu();
           }
         else    
         if (opc==2){
           pedido();
           opcao=menu();
           }
         else          
         if (opc==3){                      
           estoque();
           opcao=menu();              
          }
         if (opc==4){
           printf("\n Programa Encerrado ");
           }
    }              
   system("pause");
   return(0);  
}