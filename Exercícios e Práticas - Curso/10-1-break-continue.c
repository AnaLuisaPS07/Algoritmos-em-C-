#include <stdio.h>

int main(){
    int i;
    
    for (i=1; i<=10; i++){
       
      if (i==5){
        continue;
      }  
      
     printf("%d\n", i);   
    }
    
}
//No caso, ele ignorou o número 5 e do 4 puou para o 6
