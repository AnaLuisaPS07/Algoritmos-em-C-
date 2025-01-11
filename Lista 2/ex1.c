//Exercício 1 - lista 2
//(2-4 teste)

#include <stdio.h>
#include <string.h>

int main() {
    char saldoS[50], saqueS[50];  //strings 
    float saldo;
    int saque, aux_saque;
    int notas[6] = {100, 50, 20, 10, 5, 2};  //cédulas
    int qtdNotasMin[6] = {0};  //quantidade de cédulas mínima
    int qtdNotasMax[6] = {0};  //quantidade de cédulas máxima
    int i;

    //qntrada do saldo como string
    printf("Entre com o saldo da conta a ser sacada (em reais): ");
    scanf("%s", saldoS);
    printf("\n\n");

    //substituir vírgula por ponto, caso o usuário coloque vírgula
    for (i = 0; i < strlen(saldoS); i++) { //comprimento da string
        if (saldoS[i] == ',') {
            saldoS[i] = '.';
        }
    }

    //converter a string para float
    sscanf(saldoS, "%f", &saldo);

    //validação 
    do {
        printf("Entre com o valor do saque (em reais): ");
        scanf("%s", saqueS);
        printf("\n");

        for (i = 0; i < strlen(saqueS); i++) {
            if (saqueS[i] == ',') {
                saqueS[i] = '.';
            }
        }

        //converter a string para inteiro
        sscanf(saqueS, "%d", &saque); 

        printf("\n");

        if (saque <= 0) {
            printf("Valor do saque invalido\n");
            printf("\n");

        } else if (saque > (int)saldo) {
            printf("Saldo insuficiente para valor desejado\n");
            printf("\n");

        } else if (saque % 10 == 1 || saque % 10 == 3) {
            //verifica se o valor termina com 1 ou 3
            printf("Valor do saque incompativel com notas disponiveis\n");
            printf("\n");
        }
    } while (saque <= 0 || saque > (int)saldo || saque % 10 == 1 || saque % 10 == 3);

    //menor número de cédulas
    aux_saque = saque; //copia o valor
    for (i = 0; i < 6; i++) { //itera sobre as cédulas
        qtdNotasMin[i] = aux_saque / notas[i]; //cálculo de quantas cédulas necessárias
        aux_saque %= notas[i]; //atualiza
    }

    aux_saque = saque; //reinicia para valor original

    //usar a maior quantidade possível de cédulas de 2
    qtdNotasMax[5] = aux_saque / 2;  
    aux_saque %= 2;

    //ajuste de cédulas se necessário
    if (aux_saque != 0) {
        qtdNotasMax[5] -= 2;  
        qtdNotasMax[4] = 1;   
    }

    saldo -= saque; //atualiza saldo

    printf("RESULTADOS\n");
    printf("\n");
    printf("Valor atualizado do saldo (em reais): %.2f\n", saldo);
    printf("\n");

    //opção 1
    printf("Opcao de saque 1 (menor quantidade possivel de cedulas):\n");
    printf("\n");
    for (i = 0; i < 6; i++) {
        if (qtdNotasMin[i] > 0) {
            printf("Cedulas de %d reais: %d\n", notas[i], qtdNotasMin[i]);
            printf("\n");
        }
    }

    //opção 2
    printf("Opcao de saque 2 (maior quantidade possivel de cedulas):\n");
    printf("\n");

    for (i = 5; i >= 4; i--) { 
        if (qtdNotasMax[i] > 0) {
            printf("Cedulas de %d reais: %d\n", notas[i], qtdNotasMax[i]);
            printf("\n");
        }
    }

    return 0;
}
