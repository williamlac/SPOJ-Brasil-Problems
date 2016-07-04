//
//  main.cpp
//  Maratona-Lista 1
//
//  Created by William Sathler Lacerda on 5/3/16.
//  Copyright © 2016 William Sathler Lacerda. All rights reserved.
//

#include<stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
	int lin, col;
	scanf("%d %d", &lin, &col);
	int matriz[lin][col];
	for (int i = 0; i<lin; i++) {
		for (int j = 0; j<col; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}
	int maximo = 0;
	int temp;
	for (int i = 0; i<lin; i++) {
		temp = 0;
		for (int j = 0; j<col; j++) {
			temp += matriz[i][j];
		}
		maximo = max(maximo, temp);
	}
	for (int i = 0; i<col; i++) {
		temp = 0;
		for (int j = 0; j<lin; j++) {
			temp += matriz[j][i];
		}
		maximo = max(maximo, temp);
	}
	
	printf("%d", maximo);
	return 0;
}
