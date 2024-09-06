1. Inclusão de Bibliotecas e Definições de Constantes

#include <stdio.h>

#define MIN_ANO 2000
#define MAX_ANO 2024
#define MIN_MES 1
#define MAX_MES 12
#define MIN_TEMP -70
#define MAX_TEMP 60
#include <stdio.h>: Inclui a biblioteca padrão de entrada e saída, que permite usar funções como printf e scanf.

#define MIN_ANO 2000 e similares: Definem constantes que serão usadas para validação das entradas. 
Isso facilita a manutenção do código, pois você só precisa alterar o valor em um lugar se precisar 
mudar algum limite.


2. Função para Determinar o Número de Dias no Mês

int dias_no_mes(int mes, int ano) {
    if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            return 29;
        } else {
            return 28;
        }
    }
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    }
    return 31;
}
Propósito: Determina quantos dias tem um mês específico, considerando anos bissextos para fevereiro.

Estrutura do Código:

Fevereiro (mês 2): Verifica se o ano é bissexto. Anos divisíveis por 4 são bissextos, 
mas anos divisíveis por 100 não são, a menos que também sejam divisíveis por 400.
Meses com 30 dias: Abril, Junho, Setembro e Novembro.
Meses com 31 dias: Todos os outros meses.



3. Função Principal main

int main() {
    int ano, mes;
    int dias, i;
    int temperaturas[31];
    int max_temp = MIN_TEMP - 1;
    int total_temp = 0;
    int num_max_temp_dias = 0;
    int max_temp_dias[31];

Declaração de Variáveis: 

ano, mes: Para armazenar o ano e o mês informados pelo usuário.

dias: Número de dias no mês.

i: Usado como índice em loops.

temperaturas[31]: Array para armazenar as temperaturas dos dias do mês. 
Tamanho 31 é o máximo possível de dias em um mês.

max_temp: Armazena a maior temperatura encontrada. 
Inicialmente é definido como MIN_TEMP - 1 para garantir que qualquer temperatura válida será maior.

total_temp: Acumula a soma das temperaturas para calcular a média.

num_max_temp_dias: Conta quantos dias têm a temperatura máxima.

max_temp_dias[31]: Array para armazenar os dias em que a temperatura máxima foi registrada.



4. Entrada e Validação do Ano

    printf("Entre com o ano da medicao das temperaturas: ");
    scanf("%d", &ano);
    while (ano < MIN_ANO || ano > MAX_ANO) {
        printf("Ano deve ser maior ou igual a %d e menor ou igual a %d\n", MIN_ANO, MAX_ANO);
        printf("Entre com o ano da medicao das temperaturas: ");
        scanf("%d", &ano);
    }
Propósito: Solicita e valida o ano informado pelo usuário.

Detalhes:

printf e scanf são usados para exibir uma mensagem e ler a entrada do usuário.
O while garante que o ano está dentro do intervalo permitido. Se não estiver, 
solicita ao usuário que insira o ano novamente até que a entrada seja válida.



5. Entrada e Validação do Mês

    printf("Entre com o mes da medicao das temperaturas: ");
    scanf("%d", &mes);
    while (mes < MIN_MES || mes > MAX_MES) {
        printf("Mes deve ser maior do que zero e menor ou igual a %d\n", MAX_MES);
        printf("Entre com o mes da medicao das temperaturas: ");
        scanf("%d", &mes);
    }
Propósito: Solicita e valida o mês informado pelo usuário.

Detalhes:

Similar ao ano, mas o intervalo é de 1 a 12 para meses.
while garante que o mês esteja dentro do intervalo permitido.



6. Determinação do Número de Dias no Mês

    dias = dias_no_mes(mes, ano);
Propósito: Determina o número de dias no mês com base na função dias_no_mes e armazena o resultado na variável dias.



7. Entrada e Validação das Temperaturas

    printf("Temperaturas medidas (em graus Celsius):\n");

    for (i = 0; i < dias; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%d", &temperaturas[i]);
        while (temperaturas[i] < MIN_TEMP || temperaturas[i] > MAX_TEMP) {
            printf("Temperatura deve ser maior ou igual a %d graus e menor ou igual a %d graus\n", MIN_TEMP, MAX_TEMP);
            printf("Dia %d: ", i + 1);
            scanf("%d", &temperaturas[i]);
        }
Propósito: Solicita as temperaturas máximas para cada dia do mês e valida essas entradas.

Detalhes:

O for loop percorre todos os dias do mês.
printf e scanf são usados para exibir uma mensagem e ler a temperatura do usuário.
O while garante que a temperatura esteja dentro do intervalo permitido.



8. Cálculo da Maior Temperatura e Dias Correspondentes

        if (temperaturas[i] > max_temp) {
            max_temp = temperaturas[i];
            num_max_temp_dias = 0;
            max_temp_dias[num_max_temp_dias++] = i + 1;
        } else if (temperaturas[i] == max_temp) {
            max_temp_dias[num_max_temp_dias++] = i + 1;
        }

        total_temp += temperaturas[i];
    }
Propósito: Identifica a maior temperatura do mês e armazena os dias em que ela ocorreu. 
Também acumula a soma das temperaturas.

Detalhes:

Se a temperatura do dia é maior que max_temp, atualiza max_temp e reinicia a lista de dias com essa nova
temperatura máxima.
Se a temperatura do dia é igual a max_temp, adiciona o dia à lista de dias com a temperatura máxima.
Adiciona a temperatura do dia ao total_temp.



9. Cálculo da Temperatura Máxima Média

    double media_temp = (double)total_temp / dias;
Propósito: Calcula a média das temperaturas do mês.

Detalhes:

O total das temperaturas é dividido pelo número de dias.
O cast para double garante que a divisão resultará em um valor real com precisão.


10. Exibição dos Resultados

    printf("A maior temperatura maxima do mes foi de %d e aconteceu nos dias: ", max_temp);
    for (i = 0; i < num_max_temp_dias; i++) {
        if (i > 0) printf(" ");
        printf("%d", max_temp_dias[i]);
    }
    printf("\n");

    printf("A temperatura maxima media no mes foi de: %.1f graus Celsius\n", media_temp);
Propósito: Exibe a maior temperatura máxima e os dias em que ela ocorreu, além da temperatura média.

Detalhes:

Imprime a maior temperatura e os dias em que ela foi registrada.
O for loop exibe os dias em que ocorreu a maior temperatura.
Exibe a temperatura média com uma casa decimal usando %.1f.


11. Fim do Programa

    return 0;
}
Propósito: Finaliza o programa e retorna 0 para indicar que a execução foi bem-sucedida.
