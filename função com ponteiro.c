#include <stdio.h>

void inc(int *num){
(*num)++;
}

int main (void){
	int numero = 5;

	inc(&numero);
	
	printf ("Valor da vari�vel: %d", numero);
	
	return 0;
}
