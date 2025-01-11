//questao 1 - mini maratona projeto adas
#include <stdio.h>

int main() {
    int P, D1, D2;

    scanf("%d",&P);
    scanf("%d",&D1); 
    scanf("%d",&D2); 

    int soma = D1 + D2;
    int result = soma % 2 == 0;

    if ((P == 0 && result) || (P == 1 && !result)) {
        printf("0\n");
    } else {
        printf("1\n");
    }

    return 0;
}


//P= 0 alice par
//P= 1 bob par
//alice ganhadora 0
//bob ganhador 1
