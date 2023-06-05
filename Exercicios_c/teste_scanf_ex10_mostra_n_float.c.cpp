#include <stdio.h>
#include <locale.h> //bibliotéca que resolve a acentuação da String

int main(){
	
	setlocale(LC_ALL, "Portuguese"); //Chama a biblioteca de acentuação
	
	float n;
	
	printf("Entre com um numéro qualquer: \n");
	
	scanf("%f",&n);
	
	printf("\nO caractere entrado foi: %.3f",n);
	
	return 0;
}
