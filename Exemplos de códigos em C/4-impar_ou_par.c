//Número ímpar ou par

#include <stdio.h>

int main() {
    int numero;

    // Entrada de dados
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verificação
    if (numero % 2 == 0) {
        printf("%d é par.\n", numero);
    } else {
        printf("%d é ímpar.\n", numero);
    }

    return 0;
}
