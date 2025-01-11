//Lista 5 - Exercício 1
#include <stdio.h>

int main() {
   int n, h, m, c;
   int next_patient = 7 * 60; //começa ás 07h, ou seja, 420 minutos
   int critical = 0; //atingiram a condição antes de serem atendidos
   
   printf("Entre com o numero de pessoas que chegaram para a triagem: ");
   scanf("%d", &n);
 
   for (int i = 1; i <= n; i++) {
      printf("Entre com os dados de triagem da pessoa %d: ", i);
      scanf("%d %d %d", &h, &m, &c);
    
      int arrival = h * 60 + m; //converte todo o horario de chegada em minutos
      int critical_time = arrival + c; //horário em que o paciente entrará em estado crítico
    
      if (arrival>=next_patient) { //atendimento imediato
          next_patient = arrival + 30;
        
      } else { //aguardar para atendimento
          if (critical_time < next_patient) {
            critical++; //paciente da fila entrou em estado critico
          } 
          
      next_patient += 30; //recebe ele mesmo + 30 minutos (duração de uma consulta)
     }
    }
  
    printf("Numero de pessoas que atingem a condicao critica ainda na fila de atendimento: %d",critical);
    
    return 0;
}
