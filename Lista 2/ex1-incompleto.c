//Exercício 1 - lista 2
//máquina de autoatendimento bancário

#include <stdio.h>

int main() {
    float saldo_atual,saldo_novo;
    int saque;
    
     printf("Entre com o saldo da conta a ser sacada (em reais): ");
     scanf ("%f",&saldo_atual);
     
     while (1) { //loop infinito até que um valor válido seja inserido
        printf("Entre com o valor do saque (em reais): ");
        scanf ("%d",&saque);
        printf("\n");
        
        //verificar se o saldo é suficiente
        if (saque > saldo_atual) {
        printf("Saldo insuficiente para valor desejado");
        printf("\n");
        }
        
        //verifica se o valor do saque é maior que 0
        else if (saque <= 0) {
           printf("Valor do saque invalido"); 
           printf("\n");
        }
        
         //verifica se o valor termina com 1 ou 3 
        else if (saque % 10 == 1 || saque % 10 == 3) {
            printf("Valor do saque incompativel com notas disponiveis\n"); }
            
            
        //se tudo estiver certo, o saque pode ser processado
        else {
            saldo_atual -= saque;
            //aqui você processaria o cálculo das notas
            break;
        }
        
     }
    
    printf ("RESULTADOS\n");
    printf ("\n");
    printf("Valor atualizado do saldo (em reais): %.2f\n", saldo_atual);
         
      
    return 0;
}

//else if ((int)saque % 10 == 1 || (int)saque % 10 == 3) {
//else if (saque % 10 == 1 || saque % 10 == 3) {

