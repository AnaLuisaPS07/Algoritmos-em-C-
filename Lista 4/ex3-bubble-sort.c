//Lista 4 - Exercício 3

#include <stdio.h>

void bubbleSort(int arr[], int n, int crescent) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0; //identifica se houve troca

        for (int j = 0; j < n - i - 1; j++) {
            if (crescent) { //ordenação em ordem crescente
                if (arr[j] > arr[j + 1]) {
                    int aux = arr[j]; //troca
                    arr[j] = arr[j + 1];
                    arr[j + 1] = aux;
                    swapped = 1; //marcar que houve troca
                }
            }
            else { //ordenação em ordem decrescente
                if (arr[j] < arr[j + 1]) {
                    int aux = arr[j]; 
                    arr[j] = arr[j + 1];
                    arr[j + 1] = aux;
                    swapped = 1; 
                }
            }
        }

        if (!swapped) break; //caso não tenha acontecido troca, a ordenação está completa
    }
}

void showArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Entre com o numero de elementos do vetor a ser ordenado: ");
    scanf("%d", &n);

    //validação
    if (n <= 0) {
        printf("Numero invalido de elementos.\n");
        return 1;
    }

    int arr[n];
    printf("Entre com os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //mostrar o vetor em ordem crescente
    bubbleSort(arr, n, 1);
    printf("Vetor classificado em ordem crescente:\n");
    showArray(arr, n);

    //mostrar o vetor em ordem decrescente
    bubbleSort(arr, n, 0);
    printf("Vetor classificado em ordem decrescente:\n");
    showArray(arr, n);

    return 0;
}

