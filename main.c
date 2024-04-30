#include <stdio.h>
#include <stdlib.h>


char* classificador(int xp);

int main(int argc, char *argv[]) {
	char* nome;
	char* elo;
	nome = (char*) malloc(30*sizeof(char));
	int xp;
	printf("Digite um nome para o heroi: ");
	scanf("%s" ,nome);
	printf("Digite a quantidade de xp atual: ");
	scanf("%d", &xp);
	elo = classificador(xp);
	printf("O Heroi de nome %s esta no nivel de %s", nome, elo);
	return 0;
}

char* classificador(int xp){
	char* elo;
	elo = (char*) malloc(15*sizeof(char));
	if(xp<1000){
		strcpy(elo, "Ferro");
		return elo;
	}
	else if(xp>1000 && xp<2000){
		strcpy(elo, "Bronze");
		return elo;
	}
	else if(xp>2000 && xp<5000){
		strcpy(elo, "Prata");
		return elo;
	}
	else if(xp>5000 && xp<7000){
		strcpy(elo, "Ouro");
		return elo;
	}
	else if(xp>7000 && xp<8000){
		strcpy(elo, "Platina");
		return elo;
	}
	else if(xp>8000 && xp<9000){
		strcpy(elo, "Ascendente");
		return elo;
	}
	else if(xp>9000 && xp<10000){
		strcpy(elo, "Imortal");
		return elo;
	}
	else if(xp>10000){
		strcpy(elo, "Radiante");
		return elo;
	}
}
