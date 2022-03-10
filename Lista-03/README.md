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

7: Challenge: O Rotary Encoder, conhecido também como potenciômetro infinito,
é muito utilizado para controle em sons de carros e outros dispositivos. A grande
vantagem desse componente é que podemos fazer uma alteração em parâmetros de
diversas fontes sem causar algum impacto no potenciômetro. Por exemplo, um equi-
pamento de som que possui um controle de volume rotativo e remotamente através
de algum tipo de conexão USB. Com isto, elabore um programa que leia um rotary
encoder e acenda um LED ao girar para o sentido horário e outro ao girar ao sentido
anti-horário. O esquema de montagem para o dispositivo está ilustrado na figura 1.

(anexo)
