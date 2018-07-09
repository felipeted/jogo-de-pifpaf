#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

int apresenta2();

int mudar2(){
	while((posicao<1)||(posicao>9)){
		printf("\nDigite qual a posicao da carta que deseja mudar.\n");
		scanf("%i", &posicao);
	}
	
	while((nova_posicao<1)||(nova_posicao>9)){
		printf("\nPara onde voce deseja muda-la?\n");
		scanf("%i", &nova_posicao);
	}
	
	novo=mao2[posicao-1];//tira a carta desejada da m�o
	naipe_novo=naipe2[posicao-1];//tira a carta desejada da m�o
	
	mao2[posicao-1]=mao2[nova_posicao-1];//tira a carta que ocupa o lugar da desejada e realoca na posi��o antiga
	naipe2[posicao-1]=naipe2[nova_posicao-1];//tira a carta que ocupa o lugar da desejada e realoca na posi��o antiga
	
	mao2[nova_posicao-1]=novo;//coloca a carta desejada na posi��o desejada
	naipe2[nova_posicao-1]=naipe_novo;//coloca a carta desejada na posi��o desejada
	
	novo=0;
	naipe_novo=0;
	posicao=0;
	nova_posicao=0;
}
int compar2(){
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
	
	while((simnao<1)||(simnao>2)){//se quer guarda-la ou n�o
		printf("\nDeseja mantelo?\n1-sim\n2-nao\n");
		scanf("%i", &simnao);
	}
	
	if(simnao==1){//decidiu guarda-la
		printf("\nAonde deseja coloca-la?\n");//aonde
		scanf("%i", &posicao);
		lixo=mao2[posicao-1];//joga a carta antiga no lixo
		naipe_lixo=naipe2[posicao-1];//joga a carta antiga no lixo
		cartas_lixo++;//mais uma carta no lixo
		mao2[posicao-1]=novo;//coloca a carta nova na m�o
		naipe2[posicao-1]=naipe_novo;//coloca a carta nova na m�o
		apresenta2();
	}else{//decidiu n�o guardar
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
int monte2(){
	printf("\nAonde deseja coloca-la?\n");//aonde
	scanf("%i", &posicao);
	novo=mao2[posicao-1];//tira a carta da m�o
	naipe_novo=naipe2[posicao-1];//tira a carta da m�o
	mao2[posicao-1]=lixo;//recupera a do lixo
	naipe2[posicao-1]=naipe_lixo;//recupera a do lixo
	lixo=novo;//joga a antiga no lixo
	naipe_lixo=naipe_novo;//joga a antiga no lixo
	apresenta2();
}
int mostrar2(){
	apresenta2();
	printf("\nOs demais jogadores comfirmam sua vitoria?\n1-sim\n2-nao\n");
	simnao=0;
	while((simnao<1)||(simnao>2)){
		scanf("%i", &simnao);
	}
	switch(simnao){
		case 1:
			printf("\nJogador 2 ganhou!\n");
			ganha++;
		break;
		case 2:
			printf("\nJogador 2 mentiu!\n");
		break;
	}
	jogadas--;
}
