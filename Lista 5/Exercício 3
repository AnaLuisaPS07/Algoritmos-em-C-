//Lista 5 - Exercício 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para um nó da lista encadeada
typedef struct Node {
    char data;
    struct Node *next;
} Node;

// Função para empilhar um elemento
void push(Node **top, char value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Erro de memória.\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
}

// Função para desempilhar um elemento
char pop(Node **top) {
    if (*top == NULL) {
        return '\0'; // Retorna caractere nulo se a pilha estiver vazia
    }
    Node *temp = *top;
    char value = temp->data;
    *top = temp->next;
    free(temp);
    return value;
}

// Função para verificar se a pilha está vazia
int isEmpty(Node *top) {
    return top == NULL;
}

// Função para verificar o balanceamento dos parênteses
int verificarParenteses(char *expressao) {
    Node *pilha = NULL; // Inicializa a pilha

    for (int i = 0; expressao[i] != '\0'; i++) {
        if (expressao[i] == '(') {
            push(&pilha, '(');
        } else if (expressao[i] == ')') {
            if (isEmpty(pilha)) {
                return 0; // Parêntese de fechamento sem abertura correspondente
            }
            pop(&pilha);
        }
    }

    // Verifica se há parênteses de abertura restantes na pilha
    int resultado = isEmpty(pilha);

    // Libera a memória da pilha, se necessário
    while (!isEmpty(pilha)) {
        pop(&pilha);
    }

    return resultado;
}

int main() {
    char expressao[51];

    printf("Entre com a expressão a ser avaliada: ");
    fgets(expressao, sizeof(expressao), stdin);

    // Remove o caractere de nova linha, se presente
    size_t len = strlen(expressao);
    if (len > 0 && expressao[len - 1] == '\n') {
        expressao[len - 1] = '\0';
    }

    if (verificarParenteses(expressao)) {
        printf("Expressao correta\n");
    } else {
        printf("Expressao incorreta\n");
    }

    return 0;
}
