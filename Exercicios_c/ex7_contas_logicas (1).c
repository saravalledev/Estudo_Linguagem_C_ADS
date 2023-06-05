#include <stdio.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL, "portuguese");
	
	int i=10, j=13;
	
	int result = (i & j);
	
	printf("\n\nresult = %d" , result);
		
	return 0;
}


