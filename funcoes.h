// funcoes 
#define DIM 4

void inicializar(char tabuleiro[][DIM]){
	int i, j;

	for(i = 0; i < DIM; i++){
		for(j = 0; j < DIM; j++){
			tabuleiro[i][j] = ' ';
		}
	}

	tabuleiro[0][0] = '*';
	system("@cls||clear");
	
}

void imprimir(char tabuleiro[][DIM]){
	int i, j;
	for(i = 0; i < DIM; i++){
		printf("|");
		for(j = 0; j < DIM; j++){
			printf(" %c ", tabuleiro[i][j]);
		}
		printf("|");
		printf("\n");
	}
}

void movW(char tabuleiro[][DIM]){
	int i, j;
	for(int i = 0; i < DIM; i++){
		for(int j = 0; j < DIM; j++){
			if(tabuleiro[i][j] == '*'){
				if( (i-1) >= 0 ){
					tabuleiro[i][j] = ' ';
					i = i - 1;
					tabuleiro[i][j] = '*';	
					break;
				}	
			}
		}
	}
}

void movS(char tabuleiro[][DIM]){
	int i, j;
	for(int i = 0; i < DIM; i++){
		for(int j = 0; j < DIM; j++){
			if(tabuleiro[i][j] == '*'){
				if( (i+1) < DIM ){
					tabuleiro[i][j] = ' ';
					i = i + 1;
					tabuleiro[i][j] = '*';							
					break;
				}		
			}
		}
	}
}

void movA(char tabuleiro[][DIM]){
	int i, j;
	for(int i = 0; i < DIM; i++){
		for(int j = 0; j < DIM; j++){
			if(tabuleiro[i][j] == '*'){
				if( (j-1) >= 0 ){
					tabuleiro[i][j] = ' ';
					tabuleiro[i][j-1] = '*';
					break;
				}			
			}
		}
	}
}

void movD(char tabuleiro[][DIM]){
	int i, j;
	for(int i = 0; i < DIM; i++){
		for(int j = 0; j < DIM; j++){
			if(tabuleiro[i][j] == '*'){
				if( (j+1) < DIM ){
					tabuleiro[i][j] = ' ';
					tabuleiro[i][j+1] = '*';		
					break;
				}		
			}
		}
	}
}
