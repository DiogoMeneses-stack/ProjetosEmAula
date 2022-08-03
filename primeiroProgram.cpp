#include <stdio.h> //biblioteca de entrada e saída de dados 
#include <stdlib.h>
/*
Bibliotecas
As primeiras linhas de programação são definidas
pelas bibliotecas.

• stdio: funções de entrada e saída;
• stdlib: transforma string em números;
• string: manipulação de string;
• math: operações matemá)cas;

*/

/*
Operadores
Operadores Função Exemplo
  + Adição y+x; 2+9;
  - Subtração nota-extra; v-n;
  * Multiplicação 7*8; a*b; n*4;
  / Divisão n1/n2; media/2;
  % Resto da divisão 15 % 2

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


