1. Inclusão de Bibliotecas
c
Copiar código
#include <stdio.h>
#include <string.h>
#include <stdio.h>: Essa linha importa a biblioteca padrão de entrada e saída (Standard Input Output), 
permitindo o uso de funções como printf (para imprimir na tela) e scanf (para ler entradas do usuário).
#include <string.h>: Esta linha importa a biblioteca de manipulação de strings, 
que fornece funções úteis para trabalhar com arrays de caracteres (strings), como strlen (que calcula o comprimento da string) e 
sscanf (que lê dados formatados de uma string).


2. Função Principal

int main() {
int main(): Esta linha define a função principal do programa, onde a execução começa. 
O tipo de retorno é int, que geralmente indica que o programa retornará um valor inteiro ao sistema operacional.


3. Declaração de Variáveis

char saldoStr[50], saqueStr[50];  // Strings para saldo e saque
float saldo;
int saque, temp_saque;
int notas[6] = {100, 50, 20, 10, 5, 2};  // Tipos de cédulas
int qtdNotasMin[6] = {0};  // Quantidade de cédulas para opção mínima
int qtdNotasMax[6] = {0};  // Quantidade de cédulas para opção máxima
int i;
char saldoStr[50], saqueStr[50];: Declara dois arrays de caracteres (strings) para armazenar o saldo e o valor do saque, 
com até 50 caracteres cada.
float saldo;: Declara uma variável do tipo float para armazenar o saldo, permitindo decimais.
int saque, temp_saque;: Declara duas variáveis inteiras; saque para armazenar o valor que o usuário deseja sacar e 
temp_saque como uma variável auxiliar.
int notas[6] = {100, 50, 20, 10, 5, 2};: Declara um array que contém os valores das cédulas disponíveis. 
Esses valores são usados para calcular o número de cédulas necessárias.
int qtdNotasMin[6] = {0};: Inicializa um array para armazenar a quantidade de cédulas necessárias para o saque, 
visando a menor quantidade possível.
int qtdNotasMax[6] = {0};: Inicializa um array semelhante, mas para a maior quantidade possível de cédulas.
int i;: Declara uma variável inteira i que será utilizada como contador em loops.


4. Entrada do Saldo

printf("Entre com o saldo da conta a ser sacada (em reais): ");
scanf("%s", saldoStr);
printf("\n\n");
printf(...): Imprime uma mensagem solicitando que o usuário insira o saldo. 
O texto está entre aspas e é enviado para a saída padrão (geralmente a tela).
scanf("%s", saldoStr);: Lê uma string da entrada padrão e armazena em saldoStr. 
O %s indica que será lida uma string (até o primeiro espaço em branco).
printf("\n\n");: Adiciona duas quebras de linha após a entrada, apenas para formatar a saída visualmente.


5. Substituição de Vírgula por Ponto

for (i = 0; i < strlen(saldoStr); i++) {
    if (saldoStr[i] == ',') {
        saldoStr[i] = '.';
    }
}
for (i = 0; i < strlen(saldoStr); i++): Inicia um loop que percorre cada caractere da string saldoStr, 
usando strlen para obter o comprimento da string.
if (saldoStr[i] == ','): Verifica se o caractere atual é uma vírgula.
saldoStr[i] = '.';: Se a condição for verdadeira, substitui a vírgula por um ponto. 
Isso é importante para a conversão posterior, pois o ponto é o separador decimal em C.


6. Conversão de String para Float

sscanf(saldoStr, "%f", &saldo);
sscanf(saldoStr, "%f", &saldo);: Lê a string saldoStr e tenta convertê-la para um valor float, 
armazenando o resultado na variável saldo. O %f indica que estamos esperando um número em ponto flutuante.


7. Validação e Entrada do Valor do Saque

do {
    printf("Entre com o valor do saque (em reais): ");
    scanf("%s", saqueStr);
    printf("\n");
do { ... } while (...): Inicia um loop do-while que garante que o código dentro do bloco seja executado pelo menos uma vez. 
O loop continuará até que uma condição específica seja atendida.
printf(...) e scanf(...): Solicita ao usuário que insira o valor do saque, similar ao que foi feito para o saldo.


7.1. Substituição de Vírgula por Ponto no Saque

for (i = 0; i < strlen(saqueStr); i++) {
    if (saqueStr[i] == ',') {
        saqueStr[i] = '.';
    }
}
Este bloco é idêntico ao anterior, mas agora opera na string saqueStr, 
garantindo que vírgulas sejam convertidas em pontos antes da conversão para inteiro.


7.2. Conversão da String de Saque para Inteiro

sscanf(saqueStr, "%d", &saque);
sscanf(saqueStr, "%d", &saque);: Lê a string saqueStr e converte para um valor inteiro, 
armazenando na variável saque.


7.3. Validação do Saque

if (saque <= 0) {
    printf("Valor do saque invalido\n");
} else if (saque > (int)saldo) {
    printf("Saldo insuficiente para valor desejado\n");
} else if (saque % 10 == 1 || saque % 10 == 3) {
    printf("Valor do saque incompativel com notas disponiveis\n");
}
if (saque <= 0): Verifica se o valor do saque é menor ou igual a zero.
else if (saque > (int)saldo): Verifica se o saque é maior que o saldo disponível. 
(int)saldo converte o saldo para um inteiro, pois saque é um inteiro.
else if (saque % 10 == 1 || saque % 10 == 3): Verifica se o último dígito do saque é 1 ou 3 
(usando o operador módulo %), que não correspondem a cédulas disponíveis. Se alguma das condições for verdadeira, 
imprime uma mensagem de erro.


8. Cálculo do Menor Número de Cédulas


temp_saque = saque;
for (i = 0; i < 6; i++) {
    qtdNotasMin[i] = temp_saque / notas[i];
    temp_saque %= notas[i];
}
temp_saque = saque;: Copia o valor de saque para temp_saque para que possamos manipulá-lo sem perder o valor original.
for (i = 0; i < 6; i++): Um loop que itera sobre cada tipo de cédula.
qtdNotasMin[i] = temp_saque / notas[i];: Calcula quantas cédulas de cada tipo são necessárias, 
dividindo temp_saque pelo valor da cédula atual.
temp_saque %= notas[i];: Atualiza temp_saque para o restante após retirar as cédulas calculadas.


9. Cálculo da Maior Quantidade de Cédulas

temp_saque = saque;
qtdNotasMax[5] = temp_saque / 2;  // Cálculo das cédulas de 2 reais
temp_saque %= 2;
temp_saque = saque;: Reinicia temp_saque para o valor original do saque.
qtdNotasMax[5] = temp_saque / 2;: Calcula quantas cédulas de 2 reais podem ser retiradas.
temp_saque %= 2;: Atualiza temp_saque para o que sobrou após retirar as cédulas de 2 reais.


9.1. Ajuste se Necessário

if (temp_saque != 0) {
    qtdNotasMax[5] -= 2;  // Retira duas cédulas de R$ 2
    qtdNotasMax[4] = 1;   // Adiciona uma cédula de R$ 5
}
if (temp_saque != 0): Se ainda houver um valor restante que não é zero após tentar retirar as cédulas de 2 reais, é necessário ajustar.
qtdNotasMax[5] -= 2;: Remove duas cédulas de 2 reais.
qtdNotasMax[4] = 1;: Adiciona uma cédula de 5 reais, que permite que o saque total seja atingido.
10. Atualização do Saldo
c
Copiar código
saldo -= saque;
saldo -= saque;: Atualiza o saldo subtraindo o valor do saque. Isso reflete a nova quantia disponível na conta.
11. Impressão dos Resultados
c
Copiar código
printf("RESULTADOS\n");
printf("Valor atualizado do saldo (em reais): %.2f\n", saldo);
printf("RESULTADOS\n");: Imprime uma linha de título para a seção de resultados.
printf("Valor atualizado do saldo (em reais): %.2f\n", saldo);: Exibe o saldo atualizado, 
formatando-o para mostrar duas casas decimais. O %.2f especifica que estamos lidando com um float com duas casas decimais.


11.1. Opção 1: Menor Quantidade de Cédulas

printf("Opcao de saque 1 (menor quantidade possivel de cedulas):\n");
for (i = 0; i < 6; i++) {
    if (qtdNotasMin[i] > 0) {
        printf("Cedulas de %d reais: %d\n", notas[i], qtdNotasMin[i]);
    }
}
printf(...): Imprime o título para a primeira opção de saque.
for (i = 0; i < 6; i++): Um loop que percorre os tipos de cédulas.
if (qtdNotasMin[i] > 0): Verifica se a quantidade de cédulas desse tipo é maior que zero.
printf("Cedulas de %d reais: %d\n", notas[i], qtdNotasMin[i]);: Imprime o valor da cédula e a quantidade necessária.


11.2. Opção 2: Maior Quantidade de Cédulas

printf("Opcao de saque 2 (maior quantidade possivel de cedulas):\n");
for (i = 5; i >= 4; i--) {  // Inverte a ordem para imprimir cédulas de 2 reais primeiro
    if (qtdNotasMax[i] > 0) {
        printf("Cedulas de %d reais: %d\n", notas[i], qtdNotasMax[i]);
    }
}
printf(...): Imprime o título para a segunda opção de saque.
for (i = 5; i >= 4; i--): Loop que começa do índice 5 (cédulas de 2 reais) e vai até o índice 4 (cédulas de 5 reais), 
garantindo que as cédulas de 2 reais sejam exibidas primeiro.
if (qtdNotasMax[i] > 0): Verifica se há cédulas desse tipo disponíveis.


printf(...): Imprime a quantidade de cédulas disponíveis.


12. Fim da Função Principal

return 0;
return 0;: Retorna 0 para indicar que o programa terminou sem erros. Isso é uma convenção em C, indicando que a execução foi bem-sucedida.
Resumo
O programa permite que um usuário insira um saldo e um valor para saque, valida essas entradas, 
calcula a quantidade mínima e máxima de cédulas necessárias para o saque e imprime os resultados de forma clara. 
Ele utiliza conceitos de manipulação de strings, controle de fluxo com loops e condicionais, além de cálculos aritméticos simples. 
Se precisar de mais informações sobre algum trecho específico, é só avisar!
