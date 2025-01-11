//3-5

#include <stdio.h>

int main() {
    int i, num_lote, num_forno, dr, rt, grau, total_forno[5] = {0}, soma_graus[5] = {0}; 
    float pc;
    
    //solicita o número de lotes
    printf("Entre com o numero de lotes produzidos: ");
    scanf("%d", &num_lote);
    printf("\n");
    
    //solicita os dados de cada lote
    printf("Entre com uma linha para cada lote produzido com os dados separados por um espaco em branco e na seguinte ordem: numero do forno, percentual de carbono (PC), dureza Rockwell (DR) e resistencia a tracao (RT)\n");
    printf("\n");

    //armazena os graus de pureza de cada lote e o forno correspondente
    int graus[num_lote], fornos[num_lote];

    //ler os dados de cada lote
    for(i = 0; i < num_lote; i++) {
        printf("Lote %d:  ", i + 1);
        scanf("%d %f %d %d", &num_forno, &pc, &dr, &rt);   
        fornos[i] = num_forno; //armazena o número do forno

        //inicia o grau de pureza
        grau = 0;

        //verifica os testes para definir o grau de pureza
        if(pc < 7 && dr > 50 && rt > 80000) {
            grau = 10; //todos os testes atendidos
        } else if(pc < 7 && dr > 50) {
            grau = 9;
        } else if(pc < 7 && rt > 80000) {
            grau = 8;
        } else if(dr > 50 && rt > 80000) {
            grau = 7;
        } else if(pc < 7) {
            grau = 6;
        } else if(dr > 50) {
            grau = 5;
        } else if(rt > 80000) {
            grau = 4;
        } else {
            grau = 0; //nenhum teste atendido
        }

        graus[i] = grau; //armazena o grau de pureza do lote

        //atualiza a contagem de lotes e soma de graus por forno
        total_forno[num_forno - 1]++;
        soma_graus[num_forno - 1] += grau;
        printf("\n");
    }

    //exibe os graus de pureza de cada lote
    printf("Grau de pureza dos lotes produzidos\n");
    for(i = 0; i < num_lote; i++) {
        printf("Lote %d: %d\n", i + 1, graus[i]);
    }
    printf("\n");

    //exibe as estatísticas por forno
    printf("Estatisticas\n\n");
    for(i = 0; i < 5; i++) {
        if(total_forno[i] > 0) {
            printf("Forno %d: %d lote(s) com grau medio de pureza de %.1f\n", i + 1, total_forno[i], (float)soma_graus[i] / total_forno[i]);
        } else {
            printf("Forno %d: 0 lote(s)\n", i + 1);
        }
    }
    printf("\n");

    //determina o(s) forno(s) com maior e menor grau de pureza
    int maior_grau = 0, menor_grau = 10;
    for(i = 0; i < num_lote; i++) {
        if(graus[i] > maior_grau) {
            maior_grau = graus[i];
        }
        if(graus[i] < menor_grau) {
            menor_grau = graus[i];
        }
    }

    //exibe os fornos que produziram lotes com o maior grau de pureza
    printf("Fornos que produziram lote(s) com maior grau de pureza (grau %d): ", maior_grau);
    for(i = 0; i < num_lote; i++) {
        if(graus[i] == maior_grau) {
            printf("%d ", fornos[i]);
        }
    }
    printf("\n");

    //exibe os fornos que produziram lotes com o menor grau de pureza
    printf("Fornos que produziram lote(s) com menor grau de pureza (grau %d): ", menor_grau);
    for(i = 0; i < num_lote; i++) {
        if(graus[i] == menor_grau) {
            printf("%d ", fornos[i]);
        }
    }
    printf("\n");

    return 0;
}
