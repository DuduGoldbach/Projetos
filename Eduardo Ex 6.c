#include <stdio.h>
#include <stdlib.h>
//receba e exiba 5 nomes
main (){
  char nome1[15], nome2[15], nome3[15], nome4[15], nome5[15];
		printf("Qual o primeiro nome? ");
	scanf ("%s", nome1);
		printf("Qual o segundo nome? ");
	scanf ("%s", nome2);
		printf("Qual o terceiro nome? ");
	scanf ("%s", nome3);
		printf("Qual o quarto nome? ");
	scanf ("%s", nome4);
		printf("Qual o quinto nome? ");
	scanf ("%s", nome5);
printf ("\nOs nomes armazenados foram:\n\n%s, %s, %s, %s, %s.", nome1, nome2, nome3, nome4, nome5);
}