#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

opcao(){
	printf("\n1-mudar a posicao da carta\n2-comprar\n3-comprar do monte ");
	if(cartas_lixo>0){
		if((lixo>1)&&(lixo<11)){printf("(%i de ", lixo);}//numero
		else{
			switch(lixo){
				case 1:
				printf("(As de ");//letra
				break;
				case 11:
				printf("(Valete de ");//letra
				break;
				case 12:
				printf("(Dama de ");//letra
				break;
				case 13:
				printf("(Rei de ");//letra
				break;
			}
		}
		naipeteste=naipe_lixo;
		switch(naipeteste){
			case 1:
			printf("paus)");//naipe
			break;
			case 2:
			printf("copas)");//naipe
			break;
			case 3:
			printf("espadas)");//naipe
			break;
			case 4:
			printf("ouros)");//naipe
			break;
		}
	}
	printf("\n4-mostrar o jogo (ganhar)\n5-sair\n");
}
