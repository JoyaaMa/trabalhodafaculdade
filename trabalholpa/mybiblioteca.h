#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Função para cada questão passada
void q17(){
	printf("Este programa recebe valores positivos sucessivos, mas se recebido um valor negativo ele ira parar e realizar a media dos valores positivos digitados.\n");

		float valor = 0, cont = 0, soma = 0, media; //declaracao das variaveis
		/*Logica do programa:
		 Na inicializacao das variaveis, a variavel "valor" sempre sera verdadeira,
	  	 ou seja, ira entrar automaticamente no comando de repetiçao.*/
		    
   	while(valor >= 0){
    	printf("Digite um numero:\n");
    	scanf("%f", &valor);//Aqui "valor" tera um novo valor atribuido pelo usuario.
		    
	    soma += valor;//sera feita a acumulacao(soma) da variavel "valor", atraves da variavel "soma".
		    
	    /*se o valor for maior ou igual a 0(positivo), sera feita incrementacao de quantas
		  vezes o codigo rodou e realizada a media com a soma dos valores e a quantidade deles.Logo:*/
	    if(valor >= 0){
			cont++;
               media = soma/cont;
		}
		
	}	
		    printf("A media eh %.2f\n", media);		
} 
void q20(){
	//declaração de variáveis e entrada de dados
	float horas, valorH, valorT, bonus;
	printf("Quantas horas trabalhadas:");
	scanf("%f", &horas);
	printf("Quanto custa uma hora do seu trabalho?");
	scanf("%f", &valorH);
	
	//Logica do programa:
	valorT = horas * valorH;
	printf("Valor:%.2f\n", valorT);
	
	if(horas <= 40){ //menor que 40, nenhum bonus
		printf("Voce nao recebeu nenhum bonus esta semana.");
	}
	else if(40 < horas && horas <= 60){//entre 40 e 60, bonus de 50%
		bonus = (0.5 * valorT) + valorT;// 50% é igual a 50/100 que dá 0.5, calculando 0.5 da variavel mais a variável, são os acrescimos
		printf("Voce rebebeu um bonus de 50%! Totalizando %.2f esta semana!", bonus);
	}	
	else{
		bonus = valorT + valorT;//é somado 100% o valor se ele trabalhar mais de 60h por semana.
		printf("Voce rebebeu um bonus de 100%! Totalizando %.2f esta semana!", bonus);
	}

}
void q22(){
	int mag, num = 0, cont = 1;
	srand((time(NULL)));//declaração da funçao que calcula um pseudonumero aleatório
	
	mag = rand() % 501;//conjunto de numeros que o computador pode escolher
	//Logica do programa
	while(num != mag){
		printf("Tentiva %d\n", cont);
		printf("Tente acertar o numero magico:");
		scanf("%d", &num);//entrada de dados
		//aqui ele indica se o numero digitado é menor ou maior que o sorteado
		if(num > mag){
			printf("Numero maior que o numero magico! Tente um numero menor que %d\n", num);
		} else if(num < mag){
			printf("Numero menor que o numero magico! Tente um numero maior que %d\n", num);
		}
		cont++;
    } //se ele acertar, terá uma classificação
	 printf("Bingo!Voce acertou o numero magico\n");
	    
	    if(cont <= 3){
			printf("Muito sortudo");
		}else if(4 <= cont && cont <= 6){
			printf("Sortudo");
		}else if(7 <= cont && cont <= 10){
			printf("Normal");
		}else if(cont > 10){
			printf("Tente novamente");
		}
	
}
void q30(){
	    //declaração de variaveis e entrada de dados
		int mes, ano, dias;
		printf("Digite o mes:");
		scanf("%d", &mes);
		printf("Digite o ano:");
		scanf("%d", &ano);
		
		switch(mes){ //Logica do programa
			case 1:
				dias = 31;       //os meses 1, 3, 5, 7, 8, 10 e 12 possuem 31 dias, então adicionei no caso 1
				case 3:
			    	dias = 31;
				case 5:
			    	dias = 31;
				case 7:
			    	dias = 31;      
				case 8:
		    		dias = 31;
				case 10:
		    		dias = 31;
				case 12:
			    	dias = 31;	
	        break;
			case 2:
				if(((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)){
				printf("Ano bissexto\n");
				dias = 29;               //se o ano for bissexto, o mes 2 terá 29 dias, senão terá 28 dias
				} else{
					dias = 28;
				}
				break;
			case 4:           //os meses 4, 6, 9 e 11 possuem 30 dias, então adicionei todos no caso 4.
				dias = 30;
                case 6:
				dias = 30;          
				case 9:
				dias = 30;
				case 11:
				dias = 30;
		    break;
		}
			printf("Total de dias: %d\n\n",dias);
				 
	}	

void q31(){
	
    int DuracaoJogo(int horaI, int minI, int horaT, int minT){
    int duracao;
    
    //aqui o programa transforma as horas em minutos
    
    int inicioTotalMin = horaI * 60 + minI;
    int terminoTotalMin = horaT * 60 + minT;
    
    //se a hora de término for menor ou igual à hora de início então o jogo começou um dia e terminou no outro
    if (terminoTotalMin < inicioTotalMin){
    	
        terminoTotalMin += 24 * 60; // Adiciona um dia em minutos pois 20 x 60 = 1440 minutos sendo 24 horas  
    }
    //o programa vai calcular a duração do jogo em minutos
    
    duracao = terminoTotalMin - inicioTotalMin;
    
    //ajustando o programa para o máximo de 1440 min, porque um dia possui 1440 min
    if (duracao > 1440){
        duracao = 1440;
	}
    return duracao;

	}
	
	int horaI, minI, horaT, minT; //declaraçao de variaveis e entrada de dados

    printf("Digite a hora e o minuto que o jogo comeca(HH:MM)\n");
    scanf("%d %*c %d", &horaI, &minI);
    printf("Digite a hora e o minuto que o jogo termina(HH:MM)\n");
    scanf("%d %*c %d", &horaT, &minT);
   
    int duracaoJogo = DuracaoJogo(horaI, minI, horaT, minT);
    printf("A duracao do jogo foi de %d minutos.\n", duracaoJogo);
    
}	
	
	
