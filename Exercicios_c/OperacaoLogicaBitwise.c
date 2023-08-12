//este programa define duas variáveis inteiras, realiza uma operação bitwise AND entre elas e imprime o resultado na saída do console.  
//A saída dependerá dos valores binários de i e j, sendo ambos 10 e 12, respectivamente, o resultado será 8, pois em binário:  
//1010 & 1100 = 1000.

#include <stdio.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL, "portuguese");
	
	int i=10, j=12;
	
	int result = (i & j);
	
	printf("\n\nresult = %d" , result);
		
	return 0;
}


