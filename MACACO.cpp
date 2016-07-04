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


int main(){
	int N;
	scanf("%d", &N);
	int x, y, u, v, xr,yr,ur,vr, teste = 1;
	
	while (N!=0) {
		scanf("%d %d %d %d", &xr, &yr, &ur, &vr);
		for (int i = 1; i<N; i++) {
			scanf("%d %d %d %d", &x, &y, &u, &v);
			xr=std::max(x, xr);
			yr=std::min(y, yr);
			ur=std::min(u, ur);
			vr=std::max(v, vr);
		}
		if (xr>ur || yr<vr) {
			printf("Teste %d\nnenhum\n", teste);
		}
		else{
			printf("Teste %d\n%d %d %d %d\n\n", teste, xr, yr, ur, vr);
		}
		scanf("%d", &N);
		teste++;
	}
	
	
	return 0;
}
