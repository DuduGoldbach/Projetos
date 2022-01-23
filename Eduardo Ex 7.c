#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main (){
	int a, b, soma1, soma2;
	float numeros1[5], numeros2[5];
//primeiro vetor
	for (a=0;a<5;a++){
printf("Digite o %do numero do vetor1 ", a+1);
scanf("%f", &numeros1[a]);}
//segundo vetor
	for (b=0;b<5;b++){
printf("Digite o %do numero do vetor2 ", b+1);
scanf("%f", &numeros2[b]);}
//soma do primeiro vetor
for (a=0;a<1;a++){
soma1+=numeros1[a];
printf("A soma dos pares do 1o vetor foi = %d\n ", soma1);
}
//soma do segundo vetor
for (b=0;b<1;b++){
soma2+=numeros2[b];
printf("A soma dos impares do 2o vetor foi = %d ", soma2);
}
}