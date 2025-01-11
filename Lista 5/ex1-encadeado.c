//Lista 5 - Exercício 1
#include <stdio.h>
#include <stdlib.h> //alocação dinâmica e funções auxiliares

//estrutura para armazenar os dados de cada paciente
typedef struct Patient {
    int h, m, c;              
    struct Patient *next; //ponteiro para o próximo paciente
} Patient;

//cria um novo nó da lista encadeada
Patient* createPatient(int h, int m, int c) {
    Patient *newNode = (Patient*) malloc(sizeof(Patient));
    if (newNode == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    newNode->h = h;
    newNode->m = m;
    newNode->c = c;
    newNode->next = NULL;
    return newNode;
}

//adicionar um paciente ao final da lista encadeada
void addPatient(Patient **head, int h, int m, int c) {
    Patient *newNode = createPatient(h, m, c);
    if (*head == NULL) {
        *head = newNode; //1° nó da lista
    } else {
        Patient *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode; //adiciona ao final da lista
    }
}

//processa os pacientes e conta os que atingem condição crítica
int simulateAttendances(Patient *head) {
    int next_patient = 7 * 60; //começa às 07h, ou seja, 420 minutos
    int critical = 0; //quantidade de pacientes em estado crítico

    Patient *current = head;
    while (current != NULL) {
        int arrival = current->h * 60 + current->m; //converte a hora para minuto
        int critical_time = arrival + current->c; //horário em que o paciente entrará em estado crítico

        if (arrival >= next_patient) { //atendimento imediato
            next_patient = arrival + 30;
        } else { //aguarda na fila para atendimento
            if (critical_time < next_patient) {
                critical++; //paciente entrou em estado crítico na fila
            }
            next_patient += 30; //próximo atendimento em 30 minutos
        }

        current = current->next; //avança para o próximo paciente
    }

    return critical;
}

//libera a memória da lista encadeada
void freeList(Patient *head) {
    Patient *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Patient *patientList = NULL;
    int n, h, m, c;

    printf("Entre com o numero de pessoas que chegaram para a triagem: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Entre com os dados de triagem da pessoa %d: ", i);
        scanf("%d %d %d", &h, &m, &c);
        addPatient(&patientList, h, m, c);
    }

    int critical = simulateAttendances(patientList);
    printf("Numero de pessoas que atingem a condicao critica ainda na fila de atendimento: %d\n", critical);

    freeList(patientList); //libera a memória alocada
    return 0;
}
