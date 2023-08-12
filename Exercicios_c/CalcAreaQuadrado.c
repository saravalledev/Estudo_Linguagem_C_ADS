//Em resumo, o programa solicita que o usuário insira o valor do lado de um quadrado, verifica se o valor é par 
//(caso contrário, imprime "Valor inválido!") e, se o valor for par, calcula e exibe a área do quadrado dividida por 2 na saída do console.

#include <stdio.h>
#include <locale.h> //bibliotéca que resolve a acentuação da String

int main(){
	
	setlocale(LC_ALL, "Portuguese"); //Chama a biblioteca de acentuação
	
	int lado,area;
	
	printf("Digite o lado para saber a area de um quadrado: \n");
	
	scanf("%d",&lado);
	
	if(lado%2>0){
		printf("Valor invalido!");
	}
	else{
		
		area = (lado * lado)/2;
		printf("\nA área do quadrado é: %d",area);
	}
	
	return 0;
}
