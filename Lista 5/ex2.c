//cheio de erro, só passou em 1
//Lista 5 - Exercício 1

#include <stdio.h>
#include <stdlib.h>

#define MAX_FILA 1000

//função para verificar se a senha já existe na fila
int existe(int fila[], int n, int senha) {
    for (int i = 0; i < n; i++) {
        if (fila[i] == senha) {
            return 1; //senha encontrada
        }
    }
    return 0; //senha não encontrada
}

//função para remover a senha da fila
void remover(int fila[], int *n, int senha) {
    int i;
    for (i = 0; i < *n; i++) {
        if (fila[i] == senha) {
            break;
        }
    }

    if (i == *n) {
        printf("SENHA NAO EXISTE NA FILA\n");
        return;
    }

    //remover o elemento
    for (int j = i; j < *n - 1; j++) {
        fila[j] = fila[j + 1];
    }
    (*n)--; //reduz o tamanho da fila
}

//função para imprimir a configuração final da fila
void imprimir(int fila[], int n) {
    if (n == 0) {
        printf("VAZIA\n");
    } else {
        for (int i = 0; i < n; i++) {
            printf("%d", fila[i]);
            if (i < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

//função principal
int main() {
    int fila[MAX_FILA]; //a fila é representada por um vetor
    int n = 0; //número atual de pessoas na fila
    int operacao, senha;

    while (1) {
        char comando[10];
       printf("Movimentacao durante a formacao da fila:\n");  
       scanf("%s", comando);

        //se for "FIM", termina o processo
        if (comando[0] == 'F') {
            break;
        }

        //lê a operação e a senha
        scanf("%d %d", &operacao, &senha);

        //a operação de entrada (1)
        if (operacao == 1) {
            if (existe(fila, n, senha)) {
                printf("SENHA JA EXISTE NA FILA\n");
            } else {
                fila[n++] = senha; //insere a senha no final da fila
            }
        }
        //a operação de saída (2)
        else if (operacao == 2) {
            remover(fila, &n, senha);
        }
    }

    //exibe a configuração final da fila
    printf("Configuracao final apos o periodo de formacao da fila: ");
    imprimir(fila, n);

    return 0;
}
