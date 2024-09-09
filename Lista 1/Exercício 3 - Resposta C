//Exercício 3 - lista 1

#include <stdio.h>
#include <stdbool.h> //Para trabalhar com booleano

//Função para verificar se um elemento já está no conjunto 
bool existeNoConjunto(int conjunto[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (conjunto[i] == elemento) {
            return true;
        }
    }
    return false;
}

//Função para ler os elementos do conjunto e validar
void lerConjunto(int conjunto[], int *tamanho, char nome) {
    int n;
    while (true) {
        printf("Entre com o numero de elementos do conjunto %c: ", nome);
        scanf("%d", &n);
        while (getchar() != '\n'); //Limpa dados antigos
        printf("\n");
        if (n > 0) {
            break;
        } else {
            printf("O numero de elementos do conjunto %c deve ser maior do que zero\n\n", nome);
        }
    }

    //Elementos sem repetições
    while (true) {
        bool repetido = false;
        *tamanho = 0; //Reinicia o tamanho a cada tentativa

        printf("Entre com os elementos do conjunto %c: ", nome);
        for (int i = 0; i < n; i++) {
            int elemento;
            scanf("%d", &elemento);

            //Verifica se o elemento já está presente no conjunto
            if (existeNoConjunto(conjunto, *tamanho, elemento)) {
                printf("\n");
                printf("O conjunto nao pode ter elementos repetidos\n\n");
                repetido = true; 
                break; //Quando tem elemento repetido, sai do laço
            } else {
                conjunto[*tamanho] = elemento;
                (*tamanho)++;
            }
        }

        if (!repetido) {
            break;
        }
        
        //Limpa os dados antigos de entrada caso tiver erro 
        while (getchar() != '\n');
    }
}
//Função para exibir o conjunto
void exibirConjunto(int conjunto[], int tamanho, char *nome) {
    printf("\n%s: ", nome);
    if (tamanho == 0) {
        printf("vazio");
    } else {
        for (int i = 0; i < tamanho; i++) {
            printf("%d ", conjunto[i]);
        }
    }
    printf("\n");
}
//Calcular a UNIÃO
int uniao(int A[], int tamanhoA, int B[], int tamanhoB, int resultado[]) {
    int tamanhoResultado = 0;
    for (int i = 0; i < tamanhoA; i++) {
        resultado[tamanhoResultado++] = A[i];
    }
    for (int i = 0; i < tamanhoB; i++) {
        if (!existeNoConjunto(A, tamanhoA, B[i])) {
            resultado[tamanhoResultado++] = B[i];
        }
    }
    return tamanhoResultado;
}
//Calcular a INTERSEÇÃO
int intersecao(int A[], int tamanhoA, int B[], int tamanhoB, int resultado[]) {
    int tamanhoResultado = 0;
    for (int i = 0; i < tamanhoA; i++) {
        if (existeNoConjunto(B, tamanhoB, A[i])) {
            resultado[tamanhoResultado++] = A[i];
        }
    }
    return tamanhoResultado;
}
//Calcular a DIFERENÇA A - B
int diferenca(int A[], int tamanhoA, int B[], int tamanhoB, int resultado[]) {
    int tamanhoResultado = 0;
    for (int i = 0; i < tamanhoA; i++) {
        if (!existeNoConjunto(B, tamanhoB, A[i])) {
            resultado[tamanhoResultado++] = A[i];
        }
    }
    return tamanhoResultado;
}

int main() {
    int A[100], B[100], uniaoResultado[200], intersecaoResultado[100], diferencaAB[100], diferencaBA[100];
    int tamanhoA = 0, tamanhoB = 0, tamanhoUniao, tamanhoIntersecao, tamanhoDiferencaAB, tamanhoDiferencaBA;

    //Ler os conjuntos A e B
    lerConjunto(A, &tamanhoA, 'A');
    printf("\n");
    lerConjunto(B, &tamanhoB, 'B');

    //União
    tamanhoUniao = uniao(A, tamanhoA, B, tamanhoB, uniaoResultado);
    exibirConjunto(uniaoResultado, tamanhoUniao, "Conjunto uniao");

    //Interseção
    tamanhoIntersecao = intersecao(A, tamanhoA, B, tamanhoB, intersecaoResultado);
    exibirConjunto(intersecaoResultado, tamanhoIntersecao, "Conjunto interseccao");

    //Diferença A - B
    tamanhoDiferencaAB = diferenca(A, tamanhoA, B, tamanhoB, diferencaAB);
    exibirConjunto(diferencaAB, tamanhoDiferencaAB, "Conjunto diferenca entre A e B");

    //Diferença B - A
    tamanhoDiferencaBA = diferenca(B, tamanhoB, A, tamanhoA, diferencaBA);
    exibirConjunto(diferencaBA, tamanhoDiferencaBA, "Conjunto diferenca entre B e A");

    return 0;
}
