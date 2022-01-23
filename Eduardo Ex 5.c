#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//receba 5 numeros e faça o somatorio

main (){
int i;
float valores[5];
float soma;
for (i=0;i<5;i++){
printf("Digite o %do numero", i+1);
scanf("%f", &valores[i]);}
{
for (i = 0; i<5; i++)
soma+=valores[i];
printf("A soma foi de %.1f", soma);
	}
}