#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

/* pif paf simulator */

	int identifica[13][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	//int repetido[13][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int x, y;
	int baralho[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};//numero de cartas de cada numero
	int mao1[9], mao2[9], mao3[9], mao4[9], i, j, numero=0, numero2=0, numero3=0, numero4=0;//mãos e contadores
	int naipe1[9], naipe2[9], naipe3[9], naipe4[9], naipe=0, naipe5=0, naipe6=0, naipe7=0;//naipes e contadores
	int sair=0, nova_posicao=0, posicao=0, novo=0, naipe_novo=0, modo=0, jogadores=0, partida=0, jogada=0, jogadas=0, ganha=0;//funções do jogo
	int total, b1=0, b2=0, simnao=0, naipe_lixo=0, lixo=0, cartas_lixo=0, cartateste=0, naipeteste=0;
	int alt=0, alt1=0, alt2=0, alt3=0, alt4=0;
	
	int jogador1();
	int jogador2();
	int jogador3();
	int jogador4();
	int menu();

	
int main(){
	printf("%i", 1%2);
	srand(time(NULL));
	while((modo<1)||(modo>2)){
		printf("Bem-vindo ao simulador de pif paf!\n1-Multiplayer\n2-contra a maquina\n");
		scanf("%i", &modo);
		if((modo<1)||(modo>2)){printf("Opcao invalida!\n");}
	}
	if(modo==1){//multiplayer
	
		while((jogadores<2)||(jogadores>4)){
			printf("Digite o numero de jogadores:");
			scanf("%i", &jogadores);
			if(jogadores<2){printf("Opcao invalida!\n");}
			else if(jogadores>4){printf("Numero muito alto!\n");}
		}
		
		switch(jogadores){//seleção do numero de jogadores e apresentação das cartas
			case 2:	
				jogador1();
				jogador2();
			break;
			case 3:
				jogador1();
				jogador2();
				jogador3();
			break;
			case 4:
				jogador1();
				jogador2();
				jogador3();
				jogador4();
			break;
		}
		while((ganha==0)&&(sair==0)){
			menu();
		}
	}
	else if(modo==2){//contra a maquina
		printf("Modo incompleto!");
	}
	
	for(x=0;x<13;x++){//matriz identifica para saber se temos mais de duas cartas iguais
		for(y=0;y<4;y++){
			b1=b1+identifica[x][y];
			printf("%i\t", identifica[x][y]);
		}
	}
	
	printf("\n\n%i",b1);
}
