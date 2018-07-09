#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"
	
int mudar1();
int compar1();
int monte1();
int mostrar1();
int mudar2();
int compar2();
int monte2();
int mostrar2();
int mudar3();
int compar3();
int monte3();
int mostrar3();
int mudar4();
int compar4();
int monte4();
int mostrar4();
int apresenta1();
int apresenta2();
int apresenta3();
int apresenta4();
int opcao();

int menu(){
	system("cls");
	printf("Vamos comecar o jogo!\n");
	system("PAUSE>>null");
	switch(jogadores){
		case 2:
			for(jogada=0, partida=0, sair=0; jogadas<104; jogadas++){//a jogada so termina quando é o outro jogador
				mudar:
				switch(jogada){
					case 0:
						apresenta1();
						again:
						printf("\nJogador 1:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar1();
								goto mudar;
							break;
							case 2:
								compar1();
							break;
							case 3:
								if(jogadas==0){
									goto again;
								}else{
									monte1();
								}
							break;
							case 4:
								mostrar1();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 2\n");	
						}
					break;
					case 1:
						apresenta2();
						again2:
						printf("\nJogador 2:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar2();
								goto mudar;
							break;
							case 2:
								compar2();
							break;
							case 3:
								monte2();
							break;
							case 4:
								mostrar2();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 1\n");	
						}
					break;
				}
				if(jogada==0){jogada++;}
				else{jogada=0;}
				if((sair!=0)||(ganha>0)){goto sair;}
				system("PAUSE>>null");
				system("cls");
			}
		break;
		case 3:
			for(jogada=0, partida=0; jogada<104; jogadas++){//a jogada so termina quando é o outro jogador
				mudar2:
				switch(jogada){
					case 0:
						apresenta1();
						again3:
						printf("\nJogador 1:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar1();
								goto mudar2;
							break;
							case 2:
								compar1();
							break;
							case 3:
								if(jogadas==0){
									goto again;
								}else{
									monte1();
								}
							break;
							case 4:
								mostrar1();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 2\n");	
						}
					break;
					case 1:
						apresenta2();
						again4:
						printf("\nJogador 2:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar2();
								goto mudar2;
							break;
							case 2:
								compar2();
							break;
							case 3:
								monte2();
							break;
							case 4:
								mostrar2();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 3\n");	
						}
					break;
					case 2:
						apresenta3();
						again5:
						printf("\nJogador 3:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar3();
								goto mudar2;
							break;
							case 2:
								compar3();
							break;
							case 3:
								monte3();
							break;
							case 4:
								mostrar3();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 1\n");	
						}
					break;
				}
				if(jogada<2){jogada++;}
				else{jogada=0;}
				if((sair!=0)||(ganha>0)){goto sair;}
				system("PAUSE>>null");
				system("cls");	
			}
		break;
		case 4:
			for(jogada=0, partida=0; jogada<104; jogadas++){//a jogada so termina quando é o outro jogador
				mudar3:
				switch(jogada){
					case 0:
						apresenta1();
						again6:
						printf("\nJogador 1:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar1();
								goto mudar3;
							break;
							case 2:
								compar1();
							break;
							case 3:
								if(jogadas==0){
									goto again;
								}else{
									monte1();
								}
							break;
							case 4:
								mostrar1();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 2\n");	
						}
					break;
					case 1:
						apresenta2();
						again7:
						printf("\nJogador 2:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar2();
								goto mudar3;
							break;
							case 2:
								compar2();
							break;
							case 3:
								monte2();
							break;
							case 4:
								mostrar2();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 3\n");	
						}
					break;
					case 2:
						apresenta3();
						again8:
						printf("\nJogador 3:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar3();
								goto mudar3;
							break;
							case 2:
								compar3();
							break;
							case 3:
								monte3();
							break;
							case 4:
								mostrar3();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 4\n");	
						}
					break;
					case 3:
						apresenta4();
						again9:
						printf("\nJogador 4:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar4();
								goto mudar3;
							break;
							case 2:
								compar4();
							break;
							case 3:
								monte4();
							break;
							case 4:
								mostrar4();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 1\n");	
						}
					break;
				}
				if(jogada<3){jogada++;}
				else{jogada=0;}
				if((sair!=0)||(ganha>0)){goto sair;}
				system("PAUSE>>null");
				system("cls");	
			}
		break;
	}
	sair:
	system("PAUSE>>null");
}
