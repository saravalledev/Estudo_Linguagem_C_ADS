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
