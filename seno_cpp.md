# seno.cpp

O programa utiliza linguagens C e C++. Sua função é calcular o seno pela série de Taylor. 

![](C:\Users\anacl\Desktop\Ana\Estudando_C_C++\seno.png)

O programa pede o valor de X ao usuário em graus. Se o usuário digitar um numero negativo para X o programa apresenta erro e pede para digitar novamente. 

A partir disso o programa pede também o valor de parcelas que o usuário deseja. A quantidade de parcelas não pode ser menor ou igual a 0, ou o usuário terá que digitar novamente o valor. 

Após isso o programa transforma o valor de X em graus para radiano. Pois a fórmula de Taylor utiliza o valor em radiano. 

**O desafio desse programa era não utilizar nenhuma fórmula matemática da biblioteca do C/C++.** Então solucionei o problema utilizando o comando for. 

## For para calcular as parcelas:

O cálculo inicia com um for que será realizado enquanto a variável contador i for menor que a variável que contém a quantidade de parcelas pedidas pelo usuário.  E ao fim de cada parcela ele acresce 1 a variável contador i.



### For para calcular o expoente

Dentro do for que calcula as parcelas temos um for para calcular o expoente. Visto que não podemos utilizar a fórmula pow, criei uma variável chamada valor_parcela que indica o número ao qual o x será elevado, esse número é sempre ímpar e cresce a cada parcela.

Então na parcela 1 seria X elevado a 1. Então i seria igual a 1 e o X seria multiplicado apenas apenas 1 vez. 

Na parcela 2 seria X elevado a 3. Então faria a multiplicação até o i=1 ser i=3. 

E assim sucessivamente. No ínicio do for anterior há a indicação de que exponte = 1; Assim o valor da parcela anterior não interfere no valor da parcela seguinte. 



### For para calcular o fatorial

Também dentro do for que calcula as parcelas temos um for para calcular o fatorial. Utilizei a variável valor_parcela também, visto que o valor fatorial é o mesmo número que foi o expoente da parcela.

Então na parcela 1 seria 1!. Então i seria igual a 1 e o X seria multiplicado por i apenas 1 vez. 

Na parcela 2 seria 3!. Então o valor de fatorial seria multiplicado por i até i ser igual a 3.

E assim sucessivamente. No início do for das parcelas há a indicação de que fatorial = 1; Assim o valor da parcela anterior não interfere no valor da parcela seguinte.



### Conta 

Assim a conta seria: conta = expoente / fatorial

Mas aí vai o outro desafio, uma parcela soma e a outra subtraí e assim vai durante todo o cálculo. 

Então criei uma variável chamada sinal_parcela. Que inicia com valor +1. Se for soma calcula-se o seno de x que é igual ao valor anterior + conta. E muda o sinal_parcela para -1. Se não, ele calcula seno como valor anterior - conta e muda o sinal_parcela para +1.



#### No final ele imprimi o valor do seno de X.