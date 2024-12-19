//lista 5 - Exercício 4
#include <stdio.h>
#include <stdlib.h>

//representa cada criança no círculo
typedef struct Node {
    int token;           //valor da ficha da criança
    struct Node *next;   //ponteiro para o próximo nó
    struct Node *prev;   //ponteiro para o nó anterior
} Node;

//cria um novo nó (criança)
Node* createNode(int token) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->token = token;
    newNode->next = newNode->prev = NULL;
    return newNode;
}

//cria o círculo duplamente encadeado
Node* createCircle(int count, int tokens[]) {
    Node *start = createNode(tokens[0]);
    Node *current = start;
    for (int i = 1; i < count; i++) {
        Node *newNode = createNode(tokens[i]);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }
    current->next = start;
    start->prev = current;

    return start;
}

//remove uma criança do círculo
Node* removeNode(Node *current) {
    current->prev->next = current->next;
    current->next->prev = current->prev;
    Node *next = current->next;
    free(current);
    return next;
}

//determina o vencedor
int determineWinner(int count, int tokens[]) {
    Node *circle = createCircle(count, tokens);
    Node *current = circle;
    while (count > 1) {
        int steps = current->token;

        if (steps % 2 == 0) { //sentido horário
            for (int i = 0; i < steps; i++) {
                current = current->next;
            }
        } else { //sentido anti-horário
            for (int i = 0; i < steps; i++) {
                current = current->prev;
            }
        }

        current = removeNode(current);
        count--;
    }
    int winner = current->token;
    free(current);
    return winner;
}

int main() {
    int count;
    printf("Entre com o numero de criancas que vao participar da brincadeira: ");
    scanf("%d", &count);

    if (count <= 0 || count > 100) { //valida o número de crianças
        return 1;
    }

    int tokens[count];
    printf("\nEntre com os valores das fichas das criancas na ordem em que elas entraram:\n");
    for (int i = 0; i < count; i++) {
        scanf("%d", &tokens[i]);
        if (tokens[i] <= 0 || tokens[i] > 500) { //valida os valores das fichas
            return 1;
        }
    }

    int winner = determineWinner(count, tokens);
    printf("\nFicha da crianca que venceu a brincadeira: %d\n", winner);

    return 0;
}
