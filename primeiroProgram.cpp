#include <stdio.h> //biblioteca de entrada e sa�da de dados 
#include <stdlib.h>
/*
Bibliotecas
As primeiras linhas de programa��o s�o definidas
pelas bibliotecas.

� stdio: fun��es de entrada e sa�da;
� stdlib: transforma string em n�meros;
� string: manipula��o de string;
� math: opera��es matem�)cas;

*/

/*
Operadores
Operadores Fun��o Exemplo
  + Adi��o y+x; 2+9;
  - Subtra��o nota-extra; v-n;
  * Multiplica��o 7*8; a*b; n*4;
  / Divis�o n1/n2; media/2;
  % Resto da divis�o 15 % 2

*/

int main(int argc, char** argv) {
    
    char nome[30];
    char endereco[30];
    int idade;
    
    printf("digite seu nome: \n"); //entrada de dados
    scanf("%s", &nome); // leitura de dados
    
    printf("digite seu endereco\n");
    scanf("%s", &endereco);
    
    printf("digite sua idade \n");
    scanf("%d", &idade);
    
    printf("\n Nome: %s",nome );
    
    printf("\n Endereco: %s", endereco);
    
    printf("\n idade: %d", idade);

    return (EXIT_SUCCESS);
}


