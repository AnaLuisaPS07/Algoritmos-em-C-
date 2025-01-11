//Lista 4 - Exercício 4

#include <stdio.h>

//realiza a combinação de subarrays de forma ordenada
void merge(int arr[], int left, int mid, int right, int crescent) {
    int n1 = mid - left + 1; //tamanho do subarray da esquerda
    int n2 = right - mid; //tamanho do subarray da direita

    //arrays temporários
    int leftArray[n1], rightArray[n2];

    //copia os dados para os arrays temporários
    for (int i = 0; i < n1; i++)
        leftArray[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArray[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (crescent) {  //ordenação em ordem crescente
            if (leftArray[i] <= rightArray[j]) {
                arr[k] = leftArray[i];
                i++;
            } else {
                arr[k] = rightArray[j];
                j++;
            }
        } else { //ordenação em ordem decrescente
            if (leftArray[i] >= rightArray[j]) {
                arr[k] = leftArray[i];
                i++;
            } else {
                arr[k] = rightArray[j];
                j++;
            }
        }
        k++;
    }
    
    while (i < n1) { //caso haja elementos restantes
        arr[k] = leftArray[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

//implementação recursiva do merge sort
void mergeSort(int arr[], int left, int right, int crescent) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid, crescent);
        mergeSort(arr, mid + 1, right, crescent);

        merge(arr, left, mid, right, crescent);
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
    mergeSort(arr, 0, n - 1, 1);
    printf("Vetor classificado em ordem crescente:\n");
    showArray(arr, n);

    //mostrar o vetor em ordem decrescente
    mergeSort(arr, 0, n - 1, 0);
    printf("Vetor classificado em ordem decrescente:\n");
    showArray(arr, n);

    return 0;
}
