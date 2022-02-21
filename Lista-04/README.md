# Exercícios Lista-04
1: Um determinado projeto de refrigerador utiliza um sensor de temperatura con-
dicionado a trabalhar de -75oC até 5oC (0V à VDD), este refrigador implementa um
PID que é alimentado por este sensor de temperatura. Como requisito, a precisão da
temperatura medida deve ser de 0,02oC. Dado a condição, calcule a resolução mínima
do ADC que atenda ao requisito do projeto.

Vr / 02^n -1
0,02= 5- (-75) / 2^n -1
2^n= 4001
log2 4001= n
n= log4001/log2
n= 11,96 
n= ~12

2: Implemente um programa que leia um potênciometro e converta o valor lido do
ADC em tensão. (Lembrando que a alimentação do microcontrolador é de 3.3V)

(anexo)

3: Implementar um firmware que faça a leitura de um potênciometro e, utilizando
três LEDs, acenda os mesmos de acordo com a seguinte regra definida pela tabela
1:
Tabela 1: LEDs a serem acionados de acordo com cada tensão lida pelo ADC.
Valor do ADC Acionar
Até 1V LED1
Maior que 1V e Menor que 3V LED2
Maior que 3V LED3

(anexo)

4: Habilite dois canais do ADC e conecte a um mesmo potênciometro. No primero
canal, realize a leitura normalmente atribuindo a uma variável. No segundo canal,
realize a média aritimética de 10 leituras e armezene em uma variável e compare o
resultado obtido. Recomenda-se que o leitura do primeiro canal seja feita a cada 10
ciclos, para manter o sincronismo entre o canal em que é realizada a filtragem por
média aritmética.

(anexo)

9: Challenge: Utilizando divisor de tensão, faça um programa que, utilizando lei-
tura analógica, meça a resistência de um resistor. É possível determinar a resistência
a partir da tensão que é lida com a equação 1, tendo como base o circuito da figura 2,
onde R1 é um resistor fixo e R2 o resistor que terá sua resistência calculada.

(anexo)
