1. Inclusão de Bibliotecas e Definição de Constantes

#include <stdio.h>

#define MAX_VENDEDORES 10
#define MAX_DIAS 31
#define MAX_VENDAS 9999
#include <stdio.h>: Inclui a biblioteca de entrada e saída, 
permitindo o uso de funções como printf (para imprimir no console) e scanf (para ler entradas do usuário).
Constantes: Usar #define para criar constantes torna o código mais legível e fácil de manter. 
Essas constantes definem os limites do número de vendedores, dias e notas fiscais.


2. Declaração de Variáveis

int mes, num_vendedores, nota_fiscal, dia, codigo_vendedor, total_vendas = 0;
int vendas_por_dia[MAX_DIAS] = {0}, vendas_por_vendedor[MAX_VENDEDORES + 1] = {0};
int notas_fiscais[MAX_VENDAS] = {0}; 
int total_notas_fiscais = 0;       
float valor_venda, total_vendas_mes = 0.0, total_comissao_mes = 0.0;
float total_vendedor[MAX_VENDEDORES + 1] = {0.0}, comissao_vendedor[MAX_VENDEDORES + 1] = {0.0};
float total_vendas_por_dia[MAX_DIAS] = {0.0}, vendas_dia_vendedor[MAX_VENDEDORES + 1][MAX_DIAS] = {{0.0}};
Variáveis inteiras: Usadas para armazenar informações básicas como mês, número de vendedores, 
notas fiscais, dias e totais de vendas.

Arrays:
vendas_por_dia: Conta quantas vendas ocorreram em cada dia.
vendas_por_vendedor: Conta quantas vendas cada vendedor realizou.
notas_fiscais: Armazena os números das notas fiscais para evitar duplicidade.
total_vendedor e comissao_vendedor: Armazenam o total vendido por cada vendedor e suas comissões, respectivamente.
vendas_dia_vendedor: Um array bidimensional que armazena o total vendido por cada vendedor em cada dia.


3. Entrada do Mês

do {
    printf("Entre com o mes em que as vendas foram realizadas: ");
    scanf("%d", &mes);
    printf("\n");
    if (mes < 1 || mes > 12) {
        printf("Mes deve ser maior ou igual a 1 e menor ou igual a 12\n\n");
    }
} while (mes < 1 || mes > 12);
Um loop do...while que solicita ao usuário que insira o mês. 
O código continua solicitando até que um valor válido (entre 1 e 12) seja inserido. 
Isso garante que o programa não prossiga com um mês inválido.


4. Entrada do Número de Vendedores


do {
    printf("Entre com o numero de vendedores que trabalharam no mes: ");
    scanf("%d", &num_vendedores);
    printf("\n");
    if (num_vendedores < 1 || num_vendedores > MAX_VENDEDORES) {
        printf("Numero de vendedores deve ser maior do que zero\n");
    }
} while (num_vendedores < 1 || num_vendedores > MAX_VENDEDORES);
Similar ao mês, esse loop garante que o número de vendedores seja válido (entre 1 e 10).


5. Entrada das Vendas

while (1) {
    int erro = 0;  // Flag para verificar se há algum erro

    printf("Venda: ");
    scanf("%d %d %d %f", &nota_fiscal, &codigo_vendedor, &dia, &valor_venda);
    printf("\n");
    
    // Encerrar se o valor inserido for 0
    if (nota_fiscal == 0) {
        break;  
    }
    // Validações...
}
Um loop infinito que coleta as vendas. O usuário deve inserir a nota fiscal, 
código do vendedor, dia e valor da venda. Se a nota fiscal for 0, o loop é encerrado.

Validações:

Código do vendedor: Verifica se o código está entre 1 e o número de vendedores.
Dia da venda: Garante que o dia é válido (1-31, considerando os limites de cada mês).
Valor da venda: Verifica se o valor é positivo.
Nota fiscal: Se não houver erros nas entradas, verifica se a nota fiscal já foi registrada.


6. Atualização dos Totais


notas_fiscais[total_notas_fiscais++] = nota_fiscal;  // Armazena a nota fiscal
total_vendas_mes += valor_venda;
vendas_por_dia[dia]++;
total_vendas_por_dia[dia] += valor_venda;
vendas_por_vendedor[codigo_vendedor]++;
total_vendedor[codigo_vendedor] += valor_venda;
vendas_dia_vendedor[codigo_vendedor][dia] += valor_venda;  // Registra a venda por dia para o vendedor
total_vendas++;
Após a validação, os dados da venda são registrados:
A nota fiscal é armazenada.
O total de vendas do mês, as vendas por dia, e as vendas por vendedor são atualizados.
vendas_dia_vendedor registra o valor vendido por cada vendedor em cada dia específico.


7. Cálculo da Comissão

for (int i = 1; i <= num_vendedores; i++) {
    if (total_vendedor[i] <= 2000) {
        comissao_vendedor[i] = total_vendedor[i] * 0.05;
    } else if (total_vendedor[i] < 5000) {
        comissao_vendedor[i] = total_vendedor[i] * 0.07;
    } else {
        comissao_vendedor[i] = total_vendedor[i] * 0.10;
    }
    total_comissao_mes += comissao_vendedor[i];
}
Esse loop calcula a comissão para cada vendedor com base no total vendido. Dependendo do total, 
uma porcentagem de 5%, 7% ou 10% é aplicada.


8. Exibição dos Resultados

printf("\nRESUMO DE VENDAS POR VENDEDOR\n");
// Loop para exibir vendas por vendedor...
O programa imprime um resumo das vendas por vendedor, mostrando:
As vendas de cada dia para cada vendedor.
A média de vendas por dia (calculada dividindo o total vendido pelo número de dias do mês).
A comissão calculada.
Também exibe o resumo das vendas por dia e o total geral de vendas.
Resumo Final
O código é uma aplicação bem estruturada que gerencia vendas, valida entradas e calcula comissões, 
usando conceitos fundamentais de programação como loops, condições e arrays. 
Ele garante que os dados sejam inseridos corretamente antes de processá-los, 
proporcionando uma saída organizada e informativa.

