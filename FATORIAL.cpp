#include<bits/stdc++.h>

int main (){
	int n, res;
	scanf("%d", &n);
	res = n;
	if(res!=0){
		n--;
		for (int i = n; i>0; i--){
			res = res * i;
		}
		printf("%d", res);
	}
	else{
		printf("%d", 1);
	}
	
	return 0;
}
