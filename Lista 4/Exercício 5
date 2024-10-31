//Lista 4 - Exercício 5

#include <stdio.h>

void swap(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

//partição
int partition(int arr[], int first, int last, int crescent) {
    int pivot = arr[last]; //define o último elemento como pivô
    int i = first - 1; //índice para os menores que o pivô

    for (int j = first; j < last; j++) {
        if (crescent) { //ordenação em ordem crescente
            if (arr[j] <= pivot) {
                i++;
                swap(&arr[i], &arr[j]);
            }
        } else { //ordenação em ordem decrescente
            if (arr[j] >= pivot) {
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
    }

    swap(&arr[i + 1], &arr[last]); //coloca o pivô na posição correta
    return i + 1; //retorna o índice do pivô
}

void quickSort(int arr[], int first, int last, int crescent) {
    if (first < last) {
        int pi = partition(arr, first, last, crescent); //encontra o pivô
        quickSort(arr, first, pi - 1, crescent); //ordenar os elementos menores que o pivô
        quickSort(arr, pi + 1, last, crescent); //ordenar os elementos maiores que o pivô
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
    quickSort(arr, 0, n - 1, 1);
    printf("Vetor classificado em ordem crescente:\n");
    showArray(arr, n);

    //mostrar o vetor em ordem decrescente
    quickSort(arr, 0, n - 1, 0);
    printf("Vetor classificado em ordem decrescente:\n");
    showArray(arr, n);

    return 0;
}

