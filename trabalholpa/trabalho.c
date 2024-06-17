
#include <stdio.h>
#include "mybiblioteca.h"

//Função principal do programa

int main(){ 
        int i = 1;


		int opcao;
		printf("---------------MENU------------------\n");
      	printf("Tecle (1) para escolher a questao 17.\n");
     	printf("Tecle (2) para escolher a questao 20.\n");
     	printf("Tecle (3) para escolher a questao 22.\n");
     	printf("Tecle (4) para escolher a questao 30.\n");
    	printf("Tecle (5) para escolher a questao 31.\n");
    	printf("Tecle (6) para sair do programa.\n");
    	printf("-------------------------------------\n");
    	printf("Tecle aqui:");
     	scanf("%d", &opcao);
     	switch(opcao)
    	{
        	case 1:
        		q17();
	        	break;
        	case 2:
	        	q20();
		        break;
	        case 3:
	         	q22();
	        	break;
	        case 4:
	         	q30();
                break;
         	case 5:
	        	q31();
	        	break;
            case 6:
	        	printf("...Saindo do programa...");
	        	break;
        	default:
	    	printf("Opção inválida");
	        	break;
      	} 
 	    if(opcao != 6){
				int rep;

				printf("\nDeseja repetir?(Digite '1' para sim e '0' para nao) ");
				scanf("%d", &rep);

				 if(rep == 1){
					i++;
					return main();
				 } else if(rep == 0){
					printf("...Saindo do programa...");
				 } else { 
				 	printf("Opção inválida");
				 }
        }
      	
	


	getchar();
	return 0;
}
  
