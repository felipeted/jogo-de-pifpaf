#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

int apresenta4();

int mudar4(){
	while((posicao<1)||(posicao>9)){
		printf("\nDigite qual a posicao da carta que deseja mudar.\n");
		scanf("%i", &posicao);
	}
	
	while((nova_posicao<1)||(nova_posicao>9)){
		printf("\nPara onde voce deseja muda-la?\n");
		scanf("%i", &nova_posicao);
	}
	
	novo=mao4[posicao-1];//tira a carta desejada da mão
	naipe_novo=naipe4[posicao-1];//tira a carta desejada da mão
	
	mao4[posicao-1]=mao4[nova_posicao-1];//tira a carta que ocupa o lugar da desejada e realoca na posição antiga
	naipe4[posicao-1]=naipe4[nova_posicao-1];//tira a carta que ocupa o lugar da desejada e realoca na posição antiga
	
	mao4[nova_posicao-1]=novo;//coloca a carta desejada na posição desejada
	naipe4[nova_posicao-1]=naipe_novo;//coloca a carta desejada na posição desejada
	
	novo=0;
	naipe_novo=0;
	posicao=0;
	nova_posicao=0;
}
int compar4(){
	srand(time(NULL));
	again:
	novo=1+(rand() % 13);//compra a carta
	naipe_novo=1+(rand() % 4);//naipe da carta nova
	
	if(identifica[novo][naipe_novo]<2){
		identifica[novo][naipe_novo]+=1;
	}else{goto again;}
	
	if((novo>1)&&(novo<11)){printf("Voce comprou: %i de ", novo);}//numero
	else{
		switch(novo){
			case 1:
			printf("As de ");//letra
			break;
			case 11:
			printf("Valete de ");//letra
			break;
			case 12:
			printf("Dama de ");//letra
			break;
			case 13:
			printf("Rei de ");//letra
			break;
		}
	}
	naipeteste=naipe_novo;
	switch(naipeteste){
		case 1:
		printf("paus\n");//naipe
		break;
		case 2:
		printf("copas\n");//naipe
		break;
		case 3:
		printf("espadas\n");//naipe
		break;
		case 4:
		printf("ouros\n");//naipe
		break;
	}
	
	while((simnao<1)||(simnao>2)){//se quer guarda-la ou não
		printf("\nDeseja mantelo?\n1-sim\n2-nao\n");
		scanf("%i", &simnao);
	}
	
	if(simnao==1){//decidiu guarda-la
		printf("\nAonde deseja coloca-la?\n");//aonde
		scanf("%i", &posicao);
		lixo=mao4[posicao-1];//joga a carta antiga no lixo
		naipe_lixo=naipe4[posicao-1];//joga a carta antiga no lixo
		cartas_lixo++;//mais uma carta no lixo
		mao4[posicao-1]=novo;//coloca a carta nova na mão
		naipe4[posicao-1]=naipe_novo;//coloca a carta nova na mão
		apresenta4();
	}else{//decidiu não guardar
		printf("Carta jogada no lixo!\n");
		lixo=novo;//carta nova vai para o lixo
		naipe_lixo=naipe_novo;//carta nova vai para o lixo
		cartas_lixo++;//mais uma carta no lixo
	}
	
	novo=0;
	naipe_novo=0;
	posicao=0;
	simnao=0;
}
int monte4(){
	printf("\nAonde deseja coloca-la?\n");//aonde
	scanf("%i", &posicao);
	novo=mao4[posicao-1];//tira a carta da mão
	naipe_novo=naipe4[posicao-1];//tira a carta da mão
	mao4[posicao-1]=lixo;//recupera a do lixo
	naipe4[posicao-1]=naipe_lixo;//recupera a do lixo
	lixo=novo;//joga a antiga no lixo
	naipe_lixo=naipe_novo;//joga a antiga no lixo
	apresenta4();
}
int mostrar4(){
	apresenta4();
	printf("\nOs demais jogadores comfirmam sua vitoria?\n1-sim\n2-nao\n");
	simnao=0;
	while((simnao<1)||(simnao>2)){
		scanf("%i", &simnao);
	}
	switch(simnao){
		case 1:
			printf("\nJogador 4 ganhou!\n");
			ganha++;
		break;
		case 2:
			printf("\nJogador 4 mentiu!\n");
		break;
	}
	jogadas--;
}
