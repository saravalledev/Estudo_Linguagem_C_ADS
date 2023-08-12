//Esse programa calcula o resultado da operação bitwise AND entre os valores de i e j (10 e 13 em binário: 1010 & 1101), 
//o que resulta em 8 (em binário: 1000), e imprime o resultado (8) na saída do console.

#include <stdio.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL, "portuguese");
	
	int i=10, j=13;
	
	int result = (i & j);
	
	printf("\n\nresult = %d" , result);
		
	return 0;
}


