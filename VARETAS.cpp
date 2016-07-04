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
	int res = 0, a;
	int quant[1000];
	while (A!=0 ){
		for (int i = 0; i<A; i++) {
			scanf("%d %d", &a, &quant[i]);
			if (quant[i]>3) {
				res+=quant[i]/4;
				quant[i] = quant[i]%4;
			}
			if (quant[i]%2!=0) {
				quant[i]--;
			}
		}
		for (int i = 0; i<A; i++) {
			if (quant[i]==2) {
				for (int j = i+1; j<A; j++) {
					if (quant[j] == 2) {
						res++;
						quant[i] = quant[j] = 0;
						break;
					}
				}
			}
		}
		printf("%d\n", res);
		scanf("%d", &A);
		res = 0;
		
	}
	
	
	return 0;
}
