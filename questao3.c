# include < stdio .h >

int main ( ) {
//N�o foi declarado a vari�vel i
int N_ant , N_prox , N , N_atual//Est� faltando o ";"
N_ant = N_atual =1;
for( i =1 ,i <= N , i ++) {//erro no la�o de repeti��o
N_prox = N_ant + N_atual ;
N_ant = N_atual ;
N_atual = N_prox ;
printf ("Fim do laco !\n") ;
return//est� faltando o 0
}

