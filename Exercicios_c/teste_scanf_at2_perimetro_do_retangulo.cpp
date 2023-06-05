#include <stdio.h>
#include <locale.h> //bibliotéca que resolve a acentuação da String

int main(){
	
	setlocale(LC_ALL, "Portuguese"); //Chama a biblioteca de acentuação
	
	int lado1,lado2,perimetro;
	
	printf("Digite o primeiro lado para saber o perimetro de um retangulo: \n");
	scanf("%d",&lado1);
	
	printf("Digite o segundo lado para saber o perimetro de um retangulo: \n");
	scanf("%d",&lado2);
	
	
	perimetro = (lado1 * 2) + (lado2 * 2);
	
	printf("\nO perímetro é: %d",perimetro);
	
	return 0;
}
