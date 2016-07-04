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
	int valor, teste = 1;
	scanf("%d", &valor);
	int i = 0, j = 0, k = 0, l = 0;
	while (valor!=0) {
		while (valor>0) {
			if (valor >= 50) {
				i++;
				valor-=50;
			}
			else if (valor >= 10){
				j++;
				valor-=10;
			}
			else if (valor >= 5){
				k++;
				valor-=5;
			}
			else if (valor >= 1){
				l++;
				valor--;
			}
		}
		
		printf("Teste %d\n%d %d %d %d\n\n", teste, i , j , k , l);
		
		scanf("%d", &valor);
		teste++;
		i = j = k = l = 0;
	}
	
	
	return 0;
}
