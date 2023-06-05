#include <stdio.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL, "portuguese");
	
	int i=7, j=7;
	double x=0.0, y = 999.9;
	
	int result;
	
	result = ! (i-j) + 1;
	
	printf("\n\nresult = %d" , result);
		
	return 0;
}


