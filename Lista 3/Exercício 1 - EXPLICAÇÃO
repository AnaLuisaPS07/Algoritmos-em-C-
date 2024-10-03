1. #include <stdio.h>

Este comando inclui a biblioteca padrão de entrada e saída em C, permitindo o uso de funções como printf() e scanf().

2. Função Recursiva decimal_Binario(int n)
Esta função converte o número decimal n em seu equivalente binário e o imprime diretamente.


void decimal_Binario(int n) {
    if (n > 1) {
        decimal_Binario(n / 2); // Chamada recursiva
    }
    printf("%d", n % 2); // Imprime o resto da divisão por 2
}
Se n > 1, a função chama a si mesma passando n / 2 como argumento. Isso ocorre até que n seja menor ou igual a 1.
printf("%d", n % 2) imprime o resto da divisão de n por 2. Esse resto será 0 ou 1, que são os dígitos binários.
Como funciona a recursão:
A recursão ocorre da seguinte forma:

Cada vez que a função é chamada, ela continua dividindo o número por 2 até que n seja 1.
Após a última chamada recursiva (quando n é 1), ela começa a retornar e imprimir o resto da divisão por 2.

Exemplo:
Vamos converter o número 13 para binário:

A função é chamada com n = 13.
A primeira verificação é 13 > 1, então ocorre a chamada recursiva com n = 13 / 2 = 6.
A função é chamada novamente com n = 6, e como 6 > 1, chama-se a função com n = 6 / 2 = 3.
Agora n = 3, que também é maior que 1, chama-se a função com n = 3 / 2 = 1.
A função é chamada com n = 1, que é o limite. Nesse ponto, não há mais chamadas recursivas, e o resto da divisão de 1 % 2 = 1 é impresso.
O que a função faz quando retorna:

Ao retornar da chamada com n = 3, ela imprime 3 % 2 = 1.
Ao retornar da chamada com n = 6, imprime 6 % 2 = 0.
Ao retornar da chamada com n = 13, imprime 13 % 2 = 1.
O resultado final impresso será 1101, que é a representação binária de 13.


3. Função main()
Esta função é a principal e responsável por obter o número do usuário, validar e chamar a função recursiva.

int main() {
    int n;

    printf("Entre com o numero natural n no formato decimal: ");
    scanf("%d", &n);

    // Validação
    if (n < 0) {
        printf("Valor inválido, insira um número natural.\n");
        return 1;
    }

    // Resultado
    printf("Representacao do numero decimal %d no formato binario: ", n);
    decimal_Binario(n);
    printf("\n");

    return 0;
}


Entrada do número: scanf("%d", &n) lê um número natural digitado pelo usuário.
Validação: Verifica se o número é negativo (n < 0). Se for, imprime uma mensagem de erro e encerra o programa.
Chamada da função: Se o número for válido, a função decimal_Binario(n) é chamada para converter e imprimir o número em binário.
Passos de execução:
O usuário insere um número decimal natural.
O programa verifica se o número é válido (não-negativo).
O número é convertido para binário e impresso na tela.



Como converter 13 para binário
O sistema binário utiliza apenas dois dígitos: 0 e 1. Para converter um número decimal para binário, 
usamos o método das divisões sucessivas por 2 e registramos o resto da divisão. 
A sequência de restos, lida de baixo para cima, resulta no número binário.

Aqui está o processo de conversão do número 13 para binário:

13 ÷ 2 = 6, resto 1 → o último dígito é 1.
6 ÷ 2 = 3, resto 0 → o próximo dígito é 0.
3 ÷ 2 = 1, resto 1 → o próximo dígito é 1.
1 ÷ 2 = 0, resto 1 → o próximo dígito é 1.
Se lemos os restos de baixo para cima (último resto até o primeiro), temos 1101, que é o binário de 13.

Então, 13 em binário é 1101, porque o processo das divisões sucessivas e os restos da divisão nos dão os dígitos do binário, 
lidos de trás para frente.

Por que usamos o resto da divisão por 2?
O resto da divisão por 2 é o que nos dá os dígitos do número binário. Quando dividimos um número por 2, o resto só pode ser 0 ou 1, 
o que corresponde diretamente aos dígitos do sistema binário:

Se o resto for 0, o dígito binário será 0.
Se o resto for 1, o dígito binário será 1.
Esse processo vai dividindo o número sucessivamente por 2, até chegarmos a 0. O número binário é formado pelos restos de todas essas divisões.
