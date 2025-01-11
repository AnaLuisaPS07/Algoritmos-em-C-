//Um professor realizou QUATRO avaliações com seus alunos durante o semestre letivo.

//Ele resolve que a média final de cada aluno será calculada por meio de média ponderada,caso as notas do aluno sejam distintas.
//Neste caso, a MAIOR nota do aluno terá peso 4,
//a SEGUNDA MAIOR nota terá peso igual a 3,
//a TERCEIRA MAIOR nota terá peso 2,
//a QUARTA MAIOR nota terá peso 1.


algoritmo "Lista 1 - Ex1"


var

   turma, c : inteiro
   n1, n2, n3, n4, media, maiorMedia, menorMedia: real


inicio

      c <- 0
      
      Repita
      
      Escreval ("Entre com o numero de alunos da turma: ")
      Leia (turma)
       Se (turma <= 0) ou (turma > 50) entao
         Escreval ("O numero de alunos na turma deve ser maior do que zero e menor ou igual a 50")
       FimSe
      Escreval (" ")
      
      Ate (turma > 0) e (turma < 50)
      
      Enquanto (c < turma) faca
      
        c <- c + 1
        Escreval ("Notas aluno" , c, ": ")
        Leia (n1,n2,n3,n4)
        Escreval (" ")
      
        Escreval ("Media final do aluno", c, ": ")
        Escreval (" ")

      FimEnquanto
      
      Escreval ("Media geral da turma: ", media)
      Escreval (" ")
      
      Escreval ("Maior media da turma: ", maiorMedia, "(Alunos: ", , ")")
      Escreval (" ")
      
      Escreval ("Menor media da turma: ", menorMedia, "Alunos: ", , ")")
      Escreval (" ")

fimalgoritmo
