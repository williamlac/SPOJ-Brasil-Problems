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
	int A, B;
	scanf("%d %d", &A, &B);
	int res = 0, a, cont = 0;
	char nome[50];
	while (A!=0){
		for (int i = 0; i<A; i++) {
			scanf("%s %d", nome, &a);
			cont+=a;
		}
		res = A*3 - cont;
		
		printf("%d\n", res);
		scanf("%d %d", &A, &B);
		res = cont = 0;
		
	}
	
	
	return 0;
}
