//Este programa solicita que o usuário insira valores inteiros repetidamente. 
//Ele acumula esses valores em uma variável soma e exibe a soma acumulada a cada iteração. 
//O loop infinito é interrompido quando o scanf não atribui um valor inteiro com sucesso, ou seja, 
//quando o usuário insere algo que não é um número inteiro. Com exemplo o 0 (zero).

#include <stdio.h>
#include <locale.h>
#define true 1

int main (){
	setlocale(LC_ALL, "portuguese");
	int valor, retorno, soma = 0;
	
	printf("\nEntre com um valor qualquer: ");
	while(true){
		
		retorno = scanf("%d",&valor);
		if(retorno == true){
			soma =+ valor;
		}else{
			break;
			printf("\nEntre com outro valor qualquer: ");
		}
		printf("Soma = %d\n", soma);
	
	}
		
	return 0;
}


