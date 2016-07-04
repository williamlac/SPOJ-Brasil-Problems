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
	int A;
	scanf("%d", &A);
	int num[100], cont = 0, cont2 = 0, aux = 1, res, teste = 1;
	char op[99];
	while (A!=0 ){
		for (int i = 0; i<A+(A-1); i++) {
			if (i%2 == 0) {
				scanf("%d", &num[cont]);
				//printf("INT %d", num[cont]);
				cont++;
			}
			else{
				scanf("%c", &op[cont2]);
				//printf("CHAR %c", op[cont2]);
				cont2++;
			}
		}
		res = num[0];
		for (int i = 0; i<A-1; i++) {
			if (op[i] == '+') {
				res+=num[aux];
				aux++;
			}
			else{
				res-=num[aux];
				aux++;
			}
		}
		printf("Teste %d\n%d\n\n", teste, res);
		cont = cont2 = 0;
		aux = 1;
		teste++;
		scanf("%d", &A);
		
	}
	
	
	return 0;
}
