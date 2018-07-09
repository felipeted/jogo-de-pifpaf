#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

int apresenta1();
int apresenta2();
int apresenta3();
int apresenta4();

int jogador1(){
	system("PAUSE>>null");
	system("cls");
	printf("Jogador 1, e apenas o jogador 1, preste atencao a tela!\n");
	system("PAUSE>>null");
	for(i=0, numero=0, naipe=0; i<9; i++){//distribui as cartas na mão	
		novamente:
		numero=(rand() % 13);//carta aleatória de 1 a 13
		mao1[i]=numero+1;//aloca o numero na posição da carta
		naipe=(rand() % 4);//naipe aleatório de 1 a 4
		naipe1[i]=naipe+1;//aloca o naipe na posição da carta
		baralho[numero]++;//informa o numero de cada carta
		
		if(identifica[numero][naipe]<1){
			identifica[numero][naipe]+=1;
		}else{goto novamente;}
	}
	apresenta1();
}

int apresenta1(){
	for(i=0; i<9; i++){//apresenta a mão do jogador
		printf("%ia posicao - ", i+1);//posião
		if((mao1[i]>1)&&(mao1[i]<11)){printf("%i de ", mao1[i]);}//numero
		else{
			switch(mao1[i]){
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
		switch(naipe1[i]){
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
	}
	system("PAUSE>>null");
}

int jogador2(){
	jogadores=2;
	system("cls");
	printf("Jogador 2, e apenas o jogador 2, preste atencao a tela!\n");
	system("PAUSE>>null");
	for(i=0, numero2=0, naipe5=0; i<9; i++){//distribui as cartas na mão
		novamente2:
		numero2=(rand() % 13);//carta aleatória de 1 a 13
		mao2[i]=numero2+1;//aloca o numero na posição da carta
		naipe5=(rand() % 4);//naipe aleatório de 1 a 4
		naipe2[i]=naipe5+1;//aloca o naipe na posição da carta
		baralho[numero2]++;//informa o numero de cada carta
		
		if(identifica[numero2][naipe5]<1){
			identifica[numero2][naipe5]+=1;
		}else{goto novamente2;}	
	}
	apresenta2();
}

int apresenta2(){
	for(i=0; i<9; i++){//apresenta a mão do jogador
		printf("%ia posicao - ", i+1);//posião
		if((mao2[i]>1)&&(mao2[i]<11)){printf("%i de ", mao2[i]);}//numero
		else{
			switch(mao2[i]){
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
		switch(naipe2[i]){
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
	}
	system("PAUSE>>null");
}

int jogador3(){
	jogadores=3;
	system("cls");
	printf("Jogador 3, e apenas o jogador 3, preste atencao a tela!\n");
	system("PAUSE>>null");
	for(i=0, numero3=0, naipe6=0; i<9; i++){//distribui as cartas na mão
		novamente3:
		numero3=(rand() % 13);//carta aleatória de 1 a 13
		mao3[i]=numero3+1;//aloca o numero na posição da carta
		naipe6=(rand() % 4);//naipe aleatório de 1 a 4
		naipe3[i]=naipe6+1;//aloca o naipe na posição da carta
		baralho[numero3]++;//informa o numero de cada carta
		
		if(identifica[numero3][naipe6]<1){
			identifica[numero3][naipe6]+=1;
		}else{goto novamente3;}	
	}
	apresenta3();
}
int apresenta3(){
	for(i=0; i<9; i++){//apresenta a mão do jogador
		printf("%ia posicao - ", i+1);//posião
		if((mao3[i]>1)&&(mao3[i]<11)){printf("%i de ", mao3[i]);}//numero
		else{
			switch(mao3[i]){
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
		switch(naipe3[i]){
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
	}
	system("PAUSE>>null");
}

int jogador4(){
	jogadores=4;
	system("cls");
	printf("Jogador 4, e apenas o jogador 4, preste atencao a tela!\n");
	system("PAUSE>>null");
	for(i=0, numero4=0, naipe7=0; i<9; i++){//distribui as cartas na mão
		novamente4:
		numero4=(rand() % 13);//carta aleatória de 1 a 13
		mao4[i]=numero4+1;//aloca o numero na posição da carta
		naipe7=(rand() % 4);//naipe aleatório de 1 a 4
		naipe4[i]=naipe7+1;//aloca o naipe na posição da carta
		baralho[numero4]++;//informa o numero de cada carta
		
		if(identifica[numero4][naipe7]<1){
			identifica[numero4][naipe7]+=1;
		}else{goto novamente4;}	
	}
	apresenta4();
}
int apresenta4(){
	for(i=0; i<9; i++){//apresenta a mão do jogador
		printf("%ia posicao - ", i+1);//posião
		if((mao4[i]>1)&&(mao4[i]<11)){printf("%i de ", mao4[i]);}//numero
		else{
			switch(mao4[i]){
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
		switch(naipe4[i]){
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
	}
	system("PAUSE>>null");
}
