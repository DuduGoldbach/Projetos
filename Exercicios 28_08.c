#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int soma,raio, tempf, tempc;
	float circ;
	//ex 1A
	printf ("Eduardo Augusto Goldbach\n");
	printf ("dudugoldbach@gmail.com\n");
	printf ("Lages-SC\n");
	//Ex 1B
	printf ("\n Estado: Alagoas.\nCapital: Maceio.");
	printf ("\n Estado: Bahia.\nCapital: Salvador.");
	printf ("\n Estado: Ceara.\nCapital: Fortaleza.");
	printf ("\n Estado: Maranhao.\nCapital: Sao Luiz.");
	printf ("\n Estado: Paraiba.\nCapital: Joao Pessoa.");
	printf ("\n Estado: Pernambuco.\nCapital: Recife.");
	printf ("\n Estado: Piaui.\nCapital: Teresina.");
	printf ("\n Estado: Rio Grande do Norte.\nCapital: Natal.");
	printf ("\n Estado: Sergipe.\nCapital: Aracaju.\n");
	//ex 1C
	soma = (45+40+20+17+13+9);
	printf ("\nO Pai tem 45 anos, a Mae 40, os 4 filhos tenham 20, 17, 13 e 9");
	printf ("\nA soma dos integrantes da familia e %d\n\n", soma);
	//ex 1D 2piraio
	printf("Digite o Raio: ");
	scanf("%d", &raio);
	circ =(2*3.14*raio);
	printf ("A area e %.2f\n", circ);
	//ex 1E converter temperatura
	printf("\nDigite a tempetatura em Fahrenheit:");
	scanf("%d", &tempf);
	tempc =(tempf -32)*5/9;
	printf("Temperatura em Celcius e: %d\n\n",tempc);
	//ex 1F
	
	
	
	
	system("PAUSE");
	
	return 0;
}