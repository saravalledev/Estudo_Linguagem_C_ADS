#include <stdio.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL, "portuguese");
	
	int i=7, j=7;
	double x=0.0, y = 999.9;
	
	int result;
	
	result = !!i - !j + 10; // == 11
	
	// !!i é diferente de 0 que é true(0)
	// ! transforma em 0 
	// !! transforma 0 em 1
	
	printf("\n\nresult = %d" , result);
		
	return 0;
}


