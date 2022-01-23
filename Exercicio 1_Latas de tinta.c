#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int base ,altura;
	float litros, preco,galoes, lness ,areatotal ,areabase, valor;
//lata 20, cada lata 5L, cada litro 3m²
//area 2x Base + 2 x 3,14 x raio
//raio e altura dados de entrada
preco = 20;
litros = 5;
printf("Digite o Raio da Base em metros: ");
scanf("%d", &base);
printf("Digite a Altura em metros: ");
scanf("%d", &altura);
areabase =(2*base+2*3.14*base);
areatotal = (areabase*altura);
printf("\n Area total: %.2f metros. \n",areatotal);
lness =(areatotal/3);
printf ("\n %.1f Litros necessarios.\n", lness);
galoes = ceil(lness/litros);
printf("\n %.0f Galoes necessarios.\n",galoes);
valor = (galoes*preco);
printf("\n R$%.2f Sera seu gasto.\n",valor);
system("PAUSE");
}