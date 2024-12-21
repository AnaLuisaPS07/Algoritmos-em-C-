//Substitutiva P1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000 //limite para o tamanho da amostra

typedef struct {
    int idade;
    char sexo;
    int nota;
} Participante;

void exibirResultados(Participante participantes[], int n) {
    int qtdIdades[MAX] = {0};
    int qtdMasculino = 0, qtdFeminino = 0;
    int somaIdades = 0;
    int totalNotasFracoRegular = 0, totalNotasBomOtimo = 0;
    float somaNotas[MAX][2] = {{0}};
    int qtdNotas[MAX][2] = {{0}};

    for (int i = 0; i < n; i++) {
        Participante p = participantes[i];
        qtdIdades[p.idade]++;
        somaIdades += p.idade;

        if (p.sexo == 'm') qtdMasculino++;
        else qtdFeminino++;

        if (p.nota <= 2) totalNotasFracoRegular++;
        else totalNotasBomOtimo++;

        somaNotas[p.idade][p.sexo == 'm' ? 0 : 1] += p.nota;
        qtdNotas[p.idade][p.sexo == 'm' ? 0 : 1]++;
    }

    printf("Resultados da pesquisa:\n");

    for (int i = 0; i < MAX; i++) {
        if (qtdIdades[i] > 0) {
            float percentual = (qtdIdades[i] / (float)n) * 100;
            printf("Idade: %d anos (quantidade: %d; percentual: %.1f)\n", i, qtdIdades[i], percentual);
        }
    }

    printf("Media de idade das pessoas na amostra: %.1f anos\n", somaIdades / (float)n);

    if (qtdMasculino > 0) {
        printf("Sexo: masculino (quantidade: %d; percentual: %.1f)\n", qtdMasculino, (qtdMasculino / (float)n) * 100);
    }

    if (qtdFeminino > 0) {
        printf("Sexo: feminino (quantidade: %d; percentual: %.1f)\n", qtdFeminino, (qtdFeminino / (float)n) * 100);
    }

    for (int i = 0; i < MAX; i++) {
        if (qtdNotas[i][0] > 0) {
            printf("Grupo: (idade: %d; sexo: m) media nota: %.1f\n", i, somaNotas[i][0] / qtdNotas[i][0]);
        }
        if (qtdNotas[i][1] > 0) {
            printf("Grupo: (idade: %d; sexo: f) media nota: %.1f\n", i, somaNotas[i][1] / qtdNotas[i][1]);
        }
    }

    printf("Percentual de notas fraco ou regular: %.1f\n", (totalNotasFracoRegular / (float)n) * 100);
    printf("Percentual de notas bom ou otimo: %.1f\n", (totalNotasBomOtimo / (float)n) * 100);
}

int main() {
    int n;
    printf("Entre com o tamanho da amostra da pesquisa: \n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Tamanho da amostra invalida (programa sera cancelado)\n");
        return 0;
    }

    Participante participantes[MAX];
    int count = 0;

    printf("Entre com os dados das pessoas a serem incluidas na amostra:\n");
    while (count < n) {
        int idade;
        char sexo;
        int nota;

        scanf("%d %c %d", &idade, &sexo, &nota);

        int idadeInvalida = (idade < 12 || idade > 100);
        int sexoInvalido = (sexo != 'm' && sexo != 'f');
        int notaInvalida = (nota < 1 || nota > 4);

        if (idadeInvalida && sexoInvalido && notaInvalida) {
            printf("Idade, sexo e nota invalidos (pessoa rejeitada para amostra)\n");
            continue;
        }
        if (idadeInvalida && sexoInvalido) {
            printf("Idade e sexo invalidos (pessoa rejeitada para amostra)\n");
            continue;
        }
        if (idadeInvalida && notaInvalida) {
            printf("Idade e nota invalidos (pessoa rejeitada para amostra)\n");
            continue;
        }
        if (sexoInvalido && notaInvalida) {
            printf("Sexo e nota invalidos (pessoa rejeitada para amostra)\n");
            continue;
        }
        if (idadeInvalida) {
            printf("Idade invalida (pessoa rejeitada para amostra)\n");
            continue;
        }
        if (sexoInvalido) {
            printf("Sexo invalido (pessoa rejeitada para amostra)\n");
            continue;
        }
        if (notaInvalida) {
            printf("Nota invalida (pessoa rejeitada para amostra)\n");
            continue;
        }

        participantes[count].idade = idade;
        participantes[count].sexo = sexo;
        participantes[count].nota = nota;
        count++;
    }

    if (count > 0) {
        exibirResultados(participantes, count);
    } else {
        printf("Nenhuma pessoa valida para amostra\n");
    }

    return 0;
}
