#include <stdio.h>
#include <locale.h> //bibliotéca que resolve a acentuação da String

int main(){
	
	setlocale(LC_ALL, "Portuguese"); //Chama a biblioteca de acentuação
	
	double n;
	
	printf("Entre com um numéro qualquer: \n");
	
	scanf("%lf",&n);
	
	printf("\nO caractere entrado foi: %.2f",n);
	
	return 0;
}
