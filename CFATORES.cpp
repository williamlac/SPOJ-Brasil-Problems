#include <bits/stdc++.h>
#define tam 1000000
using namespace std;

int primeFactors(int n){
    int res = 0, temp = n;
    while(n%2==0){
        n=n/2;
    }
    if(temp!=n){
        res++;
        temp=n;
    }
    for(int i = 3; i<=sqrt(n); i+=2){
        temp=n;
        while(n%i==0){
            n=n/i;
        }
        if(temp!=n){

            res++;
        }
    }
    if(n>2){
        res++;
    }
    return res;
}

int main(){
    int n;
    scanf("%d", &n);
    int res;
    while(n!=0){
    res = primeFactors(n);
        printf("%d : %d\n",n, res);
        scanf("%d", &n);
    }
    return 0;


}



