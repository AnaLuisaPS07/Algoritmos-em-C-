//Calcular fatorial

#include <stdio.h>

// Declaração da função fatorial
int fatorial(int n);

int main() {
    int num;

    // Entrada de dados
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Saída de dados
    printf("O fatorial de %d é %d.\n", num, fatorial(num));

    return 0;
}

// Definição da função fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}
