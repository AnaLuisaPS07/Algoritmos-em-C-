//Prova 2

#include <stdio.h>

//função recursiva para ordenar o vetor usando Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

//função para exibir o vetor
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i],"\n");
    }
    printf("\n");
}

//função para contar e exibir as ocorrências de valores distintos nos vetores
void countDistinct(int arrA[], int n, int arrB[], int m) {
    int combined[2000];
    int size = 0;

    //combina os vetores A e B em um só
    for (int i = 0; i < n; i++) {
        combined[size++] = arrA[i];
    }
    for (int i = 0; i < m; i++) {
        combined[size++] = arrB[i];
    }

    //ordena o vetor combinado
    quickSort(combined, 0, size - 1);

    //conta as ocorrências dos valores distintos
    printf("Contagem do numero de vezes que cada valor aparece nos vetores A e B\n\n");
    int current = combined[0];
    int count = 1;
    for (int i = 1; i < size; i++) {
        if (combined[i] == current) {
            count++;
        } else {
            printf("Valor %d: %d\n", current, count);
            current = combined[i];
            count = 1;
        }
    }
    printf("Valor %d: %d\n", current, count); //último elemento
}

int main() {
    int n, m;

    //recebe o vetor A
    printf("Entre com o numero de elementos do vetor A: ");
    scanf("%d", &n);
    int arrA[n];
    printf("Entre com os elementos do vetor A: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arrA[i]);
    }

    //recebe o vetor B
    printf("Entre com o numero de elementos do vetor B: ");
    scanf("%d", &m);
    int arrB[m];
    printf("Entre com os elementos do vetor B: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arrB[i]);
    }

    //ordena e exibe o vetor A
    quickSort(arrA, 0, n - 1);
    printf("Vetor A classificado em ordem crescente: ");
    printArray(arrA, n);

    //ordena e exibe o vetor B
    quickSort(arrB, 0, m - 1);
    printf("Vetor B classificado em ordem crescente: ");
    printArray(arrB, m);

    //conta e exibe as ocorrências de cada valor distinto nos vetores A e B
    countDistinct(arrA, n, arrB, m);

    return 0;
}
