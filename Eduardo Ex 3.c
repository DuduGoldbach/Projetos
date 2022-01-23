//15 elementos
#include <stdio.h>
#include <stdlib.h>

main (){
	int i;
	int vetor[15];
		for (i=0;i<15;i++){
printf("Digite o %d numero do vetor ", i+1);
scanf("%d", &vetor[i]);}
{
	for (i=0;i<15;i++)
	printf("posicao %d: %d\n ",i+1, vetor[i]);
}
}