algoritmo "Exercicio1AED"


var

   distancia, localEncont, momentoEncont: real
   carroA, carroB: inteiro

inicio

       momentoEncont <- 0
       localEncont <- 0
       
    Repita
       ESCREVAL ("Entre com a distancia entre as cidades A e B:  ")
       Leia (distancia)
       
       Se (distancia <= 0) entao
          ESCREVAL ("A distancia entre as cidades deve ser maior do que zero ")
       FimSe
       
     Ate (distancia > 0)
   
     Repita
       
       ESCREVAL ("Entre com a velocidade do automovel que parte de A para B: ")
       Leia (carroA)
       
       Se (carroA <= 0) entao
          ESCREVAL ("A velocidade do automovel deve ser maior do que zero ")
       FimSe
       
     Ate (carroA > 0)
   
     Repita
       
       ESCREVAL ("Entre com a velocidade do automovel que parte de B para A: ")
       Leia (carroB)
       
        Se (carroB <= 0) entao
          ESCREVAL ("A velocidade do automovel deve ser maior do que zero ")
       FimSe
       
     Ate(carroB > 0)
   
       // Cálculo do tempo até o encontro
       momentoEncont <- distancia / (carroA + carroB)

       // Cálculo do local do encontro em relação à cidade A
       localEncont <- carroA*momentoEncont

       //Saída dos resultados
       
       ESCREVAL ("Momento do encontro: ", momentoEncont:0:2, " horas apos a partida dos automoveis")
       ESCREVAL ("Local do encontro:", localEncont:0:2, " Km da cidade A")

fimalgoritmo
