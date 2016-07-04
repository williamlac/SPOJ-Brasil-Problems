//
//  main.cpp
//  Maratona-Lista 1
//
//  Created by William Sathler Lacerda on 5/3/16.
//  Copyright © 2016 William Sathler Lacerda. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <cstring>
using namespace std;

struct Jogador {
	char nome[16];
	int pontos[12];
	int total;
};
void ordena (Jogador *jogador, int tamanho){
	Jogador temp;
	for (int c = 0 ; c < tamanho - 1; c++){
		for (int d = 0 ; d < tamanho - c - 1; d++){
			if (jogador[d].total < jogador[d+1].total){
				temp = jogador[d];
				jogador[d] = jogador[d+1];
				jogador[d+1] = temp;
			}
			else if (jogador[d].total == jogador[d+1].total) {
				if (strcmp(jogador[d].nome, jogador[d+1].nome)>0) {
					temp = jogador[d];
					jogador[d] = jogador[d+1];
					jogador[d+1] = temp;
				}
			}
		}
	}
}

int main(){
	int N;
	scanf("%d", &N);
	int teste = 1;
	while (N!=0) {
		Jogador jogador[N];
		for(int i = 0; i<N;i++){
			scanf("%s", jogador[i].nome);
			jogador[i].total = 0;
			for (int j = 0; j<12;j++){
				scanf("%d", &jogador[i].pontos[j]);
			}
			sort(jogador[i].pontos, jogador[i].pontos + 12);
			for (int k = 1; k<11; k++){
				jogador[i].total += jogador[i].pontos[k];
			}
		}
		int cont = 1;
		ordena(jogador, N);
		printf("Teste %d\n", teste);
		for (int i = 0; i<N; i++){
			if (jogador[i].total == jogador[i-1].total) {
				printf("%d %d %s\n",  cont, jogador[i].total, jogador[i].nome);
			}
			else{
				printf("%d %d %s\n",  i+1, jogador[i].total, jogador[i].nome);
				cont = i+1;
			}
		}
		scanf("%d", &N);
		teste++;
	}
	return 0;
}