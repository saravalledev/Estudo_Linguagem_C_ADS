#include <stdio.h>
#include <locale.h> //bibliotéca que resolve a acentuação da String

int main(){
	
	setlocale(LC_ALL, "Portuguese"); //Chama a biblioteca de acentuação
	
	int lado_quadrado,perimetro_quadrado;
	
	printf("Digite o lado para saber o perimetro de um quadrado: \n");
	
	scanf("%d",&lado_quadrado);
	
	perimetro_quadrado = lado_quadrado * 4;
	
	printf("\nO perímetro é: %d",perimetro_quadrado);
	
	return 0;
}
