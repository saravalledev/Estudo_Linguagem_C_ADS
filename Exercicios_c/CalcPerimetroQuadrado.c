//Esse é um programa simples que calcula o perímetro desse quadrado (lado * 4), baseado nos valores dos lados inseridos pelo usuário
//e exibe o valor do perímetro na saída do console.

#include <stdio.h>
#include <locale.h> //bibliotéca que resolve a acentuação da String

int main(){
	
	setlocale(LC_ALL, "Portuguese"); //Chama a biblioteca de acentuação
	
	int lado_quadrado;
	int perimetro_quadrado;
	
	printf("Digite o lado para saber o perimetro de um quadrado: \n");
	
	scanf("%d",&lado_quadrado);
	
	perimetro_quadrado = lado_quadrado * 4;
	
	printf("\O perímetro é: %d",perimetro_quadrado);
	
	return 0;
}
