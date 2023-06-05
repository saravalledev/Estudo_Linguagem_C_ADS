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


