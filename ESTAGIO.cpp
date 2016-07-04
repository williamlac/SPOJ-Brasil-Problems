//
//  main.cpp
//  Maratona-Lista 1
//
//  Created by William Sathler Lacerda on 5/3/16.
//  Copyright © 2016 William Sathler Lacerda. All rights reserved.
//

#include<stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int N, turma = 1;
	scanf("%d", &N);
	int alunos[1001], notas[1001], aluno, noota, maiorNota = -1;
	while (N!=0) {
		for (int i = 0; i<N; i++) {
			scanf("%d %d", &aluno, &noota);
			if (noota>maiorNota) {
				maiorNota = noota;
			}
			alunos[i] = aluno;
			notas[i] = noota;
		}
		printf("Turma %d\n", turma);
		for (int i = 0; i < N; i++) {
			if (notas[i] == maiorNota) {
				printf("%d ", alunos[i]);
			}
		}
		printf("\n\n");
		scanf("%d", &N);
		turma++;
		maiorNota = -1;
	}
	
	
	return 0;
}
