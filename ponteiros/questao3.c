#include <stdio.h>

int main (){
	
	int a, b, c, d; //declarou as vari�veis do tipo int
	int *p1;
	int *p2 = &a;//atribuiu o endere�o de a ao *p2
	int *p3 = &c;//atribuiu o endere�o de c ao *p3
	p1 = p2;//o cont�do de p1 vai ser = ao de p2 que � igual ao endere�o de a
	*p2 = 10;//atribui 10 ao valor de p2
	b = 20;//definiu b como 20
	int **pp;//ponteiro pra outro ponterio
	pp = &p1; //esse ponteiro aponta para p1
	*p3 = **pp; //p3 aponta para pp
	int *p4 = &d; //p4 aponta para o endere�o de d
	*p4 = b + (*p1)++;//p4 = b + 10 logo d = 30
	
	printf ("%d\t%d\t%d\t%d\n", a, b, c, d);
	
	return 0;
	
	//valor = 11 20 10 30
}

