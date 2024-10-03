//Lista 3 - Exercício 1
#include <stdio.h>

//Função recursiva para converter decimal para binário
void decimal_Binario(int n) {
    if (n > 1) {
        decimal_Binario(n / 2); //Chamada recursiva
    }
    printf("%d", n % 2); //Resto da divisão por 2
}

int main() {
    int numero;

    //Solicitar e validar
    do {
        printf("Entre com o numero natural n no formato decimal: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Valor inválido, insira um número natural.\n");
        }

    } while (numero < 0);

    //Resultado
    printf("Representacao do numero decimal %d no formato binario: ", numero);
    decimal_Binario(numero);
    printf("\n");

    return 0;
}
