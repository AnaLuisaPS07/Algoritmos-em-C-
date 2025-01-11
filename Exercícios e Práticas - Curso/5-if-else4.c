//Mesmo código, porém com uma inversão lógica

#include <stdio.h>

int main(){
    float m;
    
    printf("Digite o valor da média: ");
    scanf("%f", &m);
    
    if (m<7.0){
        printf("Reprovado(a)\n");
    }
    else {
        printf("Aprovado(a)\n");
    }
    
}
