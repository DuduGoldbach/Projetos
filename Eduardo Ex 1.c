#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main (){
	int cont;
	float nota[10];
	float media, soma;
	for (cont=0;cont<10;cont++){
printf("Digite a %d nota do aluno ", cont+1);
scanf("%f", &nota[cont]);}
{
	for (cont=0;cont<10;cont++)
	printf("Nota %d = %.1f\n",cont+1, nota[cont]);
}
{
	for (cont = 0; cont<10; cont++)
soma+=nota[cont];
media=soma/10;
printf("A media e %.1f", media);
	}
}

/*vetor de 12 inteiros, numeros recebidos, depois exiba os valores armazenados

#include <stdio.h>
#include <stdlib.h>

maint ()
{
	int i;
	float valores[12];
	for (i=0;i<12;i++){
printf("Digite o %do numero para o vetor", i+1);
scanf("%f", &valores[i]);}
{
	for (i=0;i<12;i++)
	printf("seu %do valor foi: %f\n",i+1, valores[i]);
}
}*/