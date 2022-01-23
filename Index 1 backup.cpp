#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <locale.h>


//Eduardo Augusto
//Guilherme Lied

int main(){
	int escolha;
	char NOME1[20], RG1[9], EM1[20], TEL1[10];
	system ("color F1");
	   setlocale(LC_ALL,"portuguese");
	//titulo
	printf("************************************************************************************************************************");
	printf("\n*******************************************************Info Shop********************************************************");
    printf("************************************************************************************************************************");
    //esqueleto
    while(true){
    printf("\n\n");
    printf("1 - CLIENTES-\n2 - PRODUTOS-\n3 - COMPRAS-\n4 - QUEM SOMOS -\n5 - CONTATO -\n6 - SAIR\n\nOpcão:");
    scanf("%d", &escolha);
    switch(escolha)
	{
		case 1://opçao clientes
			
		{

	            printf("************************************************************************************************************************");
	            printf("\n*******************************************************Info Shop********************************************************");
	            printf("								Clientes\n\n");
   	   	    printf("Cadastre-se: \nDigite seu nome:");
            scanf("%s", NOME1);
            printf("Digite seu RG:");
            scanf("%s", RG1);
			printf("Digite seu email:");
            scanf("%s", EM1);
   			printf("Digite seu Telefone:");
            scanf("%s", TEL1);
            printf("\n");
            printf("************************************************************************************************************************");            
			printf("\n |%s		|	-RG %s-		|	- %s		|	%s		|\n", NOME1, RG1, EM1, TEL1);
          printf("************************************************************************************************************************");
            printf("\n |Joao da Silva		|	-RG 126238436-		|	- silvavilva@gmail.com	|	(41)99999-9999|\n");
            printf("************************************************************************************************************************");
            printf("\n |Fulano de Almeida	|	-RG 986257548-    	|	- almeida3356@gmail.com	|	(41)88888-8888|\n");
            printf("************************************************************************************************************************");
            printf("\n |Sicrano Generico	|	-RG 268452785-		|	- srgenerio@gmail.com	|	(41)77777-7777|\n");
            printf("************************************************************************************************************************");
            printf("\n |Frederico Jenerio	|	-RG 216552148-		|	- jenerio4423@gmail.com	|	(41)66666-6666|\n");
            printf("************************************************************************************************************************");
         


            
             printf("************************************************************************************************************************\n\n\n");
            	break ;



		
		}
		case 2://opçao Produtos
			
			{
	            printf("************************************************************************************************************************");
	            printf("\n*******************************************************Info Shop********************************************************");
	            printf("								Produtos\n\n");


            printf("\n Mouse Gamer		|	-R$ 250,50		|	-Conector USB, Bateria interna");
            printf("\n Gabinete X-plus+	|	-R$ 1450,00		|	-Luzes RGB com controle, Tamanho Padrao, facil montagem");
            printf("\n Placa Vid. Havaianas	|	-R$ 635,50		|	-5GB, Cooler proprio");
            printf("\n SSD Saudades		|	-R$ 280,00		|	-Melhor opcao para insalar seus games");
            printf("\n Monitor 4k             |    	-R$ 4.000,00            | 	-Compatibilidade com todo tipo de console\n\n\n");
            printf("************************************************************************************************************************");
                break ;
			}
			
		case 3://opçao desconto de compras
		{
		       	printf("************************************************************************************************************************");
	            printf("**********************************************************loja**********************************************************");
                printf("								COMPRAS\n\n");
			 printf("************************************************************************************************************************"); 
			printf("Para todo cliente que fizer o cadastro na Info Shop, tem descontos de até 30% em qualquer compra. \n\n");
			printf("Temos frete grátis para toda regiao sul do pais.\n\n");
			printf("temos uma competição especializada para os tecnicos em TI. Para aqueles que aprimorarem de forma significariva nosso site, daremos o premio de qualquer produto da nossa loja.\n\n");
      	  	  printf("************************************************************************************************************************\n\n\n");
             printf("************************************************************************************************************************");
			break ;
		} 
        
	
		case 4://opçao Quem Somos

		{
			
		
				printf("************************************************************************************************************************");
	            printf("**********************************************************loja**********************************************************");
                printf("								QUEM SOMOS\n\n");
			 printf("************************************************************************************************************************");
			printf("Somos uma empresa de tecnicos de informatica que abriram seu próprio negocio a mais de 5 anos. Vendemos todo tipo de peças para o seu computador, desde placas mãe, até o led para o seu gabinete. \n\n");
			printf("Estamos localizados na Rua XV de Novembro, de onde enviamos nossos produtos para atender aos clientes localizados em todas as regioes da cidade de Curitiba.\n\n");	
			printf("Para maiores informacoes ligue 4002-8922 \n\n");
			printf("************************************************************************************************************************\n\n\n");
             printf("************************************************************************************************************************");

			 
			    break ;
		
			 
		}
		
		
		case 5: //opçao Contato
		{
			
		
				printf("************************************************************************************************************************");
	            printf("**********************************************************loja**********************************************************");
                printf("								QUEM SOMOS\n\n");
			 printf("************************************************************************************************************************");
			printf("Estamos localizados na Rua XV de Novembro, de onde enviamos nossos produtos para atender aos clientes localizados em todas as regioes da cidade de Curitiba.\n\n");	
			printf("Para maiores informacoes ligue 4002-8922 \n\n");
			printf("************************************************************************************************************************\n\n\n");
		}
		case 6://opçao Contato
		{
			exit(0);
			    break ;
		}
	}}}
    

	 
    
