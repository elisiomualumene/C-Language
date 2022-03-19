#include <stdio.h>

int main(){

   int Vet[10]={10,3,6,8,9,0,2,7,9,1},i,M[3][3]={{1,3,4},{2,4,5},{2,5,4}},j;
   
   for(i=0;i<=9;i++){
  printf("\n%d",Vet[i]);
}
     printf("\n");
     for(i=0;i < 3;i++){
         for(j=0;j < 3;j++){
            
                 printf("\n%d",M[i][j]);

                 }

                 }

    return 0;
}