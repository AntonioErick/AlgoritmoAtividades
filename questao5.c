# include <stdio.h>
int main ( ) {
int i ;
for ( i =1 ; i <= 100 ; i *=100) { //Multiplica o valor i por 100.
if ( i ==30 ) {
break ;
}
else {
printf ("%2d\n" ,2* i ) ;//J� que i n�o � igual a 30, o valor 100 antribuido no la�o de repeti��o anterior ser� multiplicado por 2.
}
}
printf ("Fim do laco !\n") ;//A sa�da do programa � 200, fim de la�o.
return 0;
}

