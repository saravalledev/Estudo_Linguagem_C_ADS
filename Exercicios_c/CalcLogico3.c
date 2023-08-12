//Esse programa calcula o valor da expressão lógica !!i - !j + 10, onde i e j são iguais a 7, e imprime o resultado (que é 10)
//na saída do console. 
//A expressão está utilizando negação lógica para transformar valores em booleanos (0 ou 1) e realizar cálculos com eles.

#include <stdio.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL, "portuguese");
	
	int i=7, j=7;
	
	int result;
	
	result = !!i - !j + 10; // == 11
	
	// !!i é diferente de 0 que é true(0)
	// ! transforma em 0 
	// !! transforma 0 em 1
	
	printf("\n\nresult = %d" , result);
		
	return 0;
}


