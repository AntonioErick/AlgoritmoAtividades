#include <stdio.h>

int main (){
	int x, *p;
	x = 100;
	p = &x;
	printf ("Valor de p =%p\tValor de *p =%d", p, *p);
	
}

//Respostas: 
//a) Advert�ncia.
//b) N�o tem o o operador de endere�o "&" na linha 6.
//c) N�o
//d) Modificado
//c) Sim, "Valor de p = 0062FE14". 
