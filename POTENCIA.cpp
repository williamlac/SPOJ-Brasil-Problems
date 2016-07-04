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
#include <math.h>
using namespace std;

int main(){
	int A;
	scanf("%d", &A);
	int res, teste = 1;
	while (A!=0){
		res =  pow(2, A) - 1;
		printf("Teste %d\n%d\n",teste, res);
		scanf("%d", &A);
		res  = 0;
		teste++;
		
	}
	
	
	return 0;
}
