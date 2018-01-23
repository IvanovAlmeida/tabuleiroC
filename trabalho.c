#include <stdio.h>
#include <string.h>
#include "prototipos.h"
#include "funcoes.h"

#define DIM 4

int main(){

	char tabuleiro[DIM][DIM];
	char op;
	int continuar = 1;

	inicializar(tabuleiro);
	
	while(continuar){

		imprimir(tabuleiro);				
		scanf("%c", &op);
		getchar();
		system("@cls||clear");
		switch(op){
			case 'd':		
			case 'D':
				system("@cls||clear");		
				movD(tabuleiro);
				break;
			case 's':
			case 'S':
				system("@cls||clear");
				movS(tabuleiro);
				break;
			case 'w':
			case 'W':
				system("@cls||clear");
				movW(tabuleiro);
				break;
			case 'a':
			case 'A':
				system("@cls||clear");
				movA(tabuleiro);
				break;
			case 'q':
			case 'Q':
				continuar = 0;
				break;
			default:
				printf("Teclas permitidas: W(Cima), S(Baixo), A(Esquerda), D(Direita), Q(Sair).\n");
		}		
		
	}

	return 0;
}


