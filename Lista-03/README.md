# Exercícios Lista-03
1: Qual a principal vantagem em utilizar uma interrupção ao invés de checar peri-
odicamente o status de uma GPIO, por exemplo.

A vantagem é saber extamente quando executar a ação, assim não tendo um alto custo de processamento e não perdendo o timing de zona morta quando entrar em ação.

2: Por que não é recomendável executar operações custosas e longas dentro de
uma rotina ISR?

Porque as rotinas de interrupção tem uma prioridade superior ao código main, assim se a interrupção for muita custosa irá ter um longo período de tempo para retornar a main e finalizar o programa.

3: Desenvolva um programa que altere o status do LD4 a cada toque no botão
USER do kit, utilizando interrupção.

(anexo)

4: Desenvolva um programa que conta quantas vezes o botão de USER foi pressi-
onado, utilizando interrupção.

(anexo)

6: Challenge: Monte na protoboard 4 LEDs e 4 botões. Cada botão deve ser
associado a um LED, e cada toque no botão deve alterar a frequência de piscadas
do LED associado. A frequência deve ser de 10Hz, 5Hz e 1Hz. Utilize uma struct e
um enumerate para indicar o status do LED e quantas vezes o botão foi pressionado.
Lembre-se que você pode utilizar arrays dentro de uma struct, e structs dentro de
outra.

(anexo)
