//Prova 2
//Ana Luísa Pereira dos Santos

#include <stdio.h>

//função recursiva com bubble sort
void bubbleSort(int arr[], int n) {
    if (n == 1) {
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    //chamada recursiva
    bubbleSort(arr, n - 1);
}

//exibir o vetor
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//contar e exibi as vezes que valores distintos aparecem nos vetores
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
    bubbleSort(combined, size);

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
    printf("Valor %d: %d\n", current, count); 
}

int main() {
    int n, m;

    //ler o vetor A
    printf("Entre com o numero de elementos do vetor A: ");
    scanf("%d", &n);
    int arrA[n];
    printf("Entre com os elementos do vetor A: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arrA[i]);
    }

    //ler o vetor B
    printf("Entre com o numero de elementos do vetor B: ");
    scanf("%d", &m);
    int arrB[m];
    printf("Entre com os elementos do vetor B: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arrB[i]);
    }

    //ordena e exibe o vetor A
    bubbleSort(arrA, n);
    printf("Vetor A classificado em ordem crescente: ");
    printArray(arrA, n);

    //ordena e exibe o vetor B
    bubbleSort(arrB, m);
    printf("Vetor B classificado em ordem crescente: ");
    printArray(arrB, m);
    
//contar e exibi as vezes que valores distintos aparecem nos vetores
    countDistinct(arrA, n, arrB, m);

    return 0;
}
