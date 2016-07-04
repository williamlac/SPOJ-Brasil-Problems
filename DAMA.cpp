#include <bits/stdc++.h>
#define tam 1000000
using namespace std;

int main (){
    int x1, y1, x2, y2;
    int distx, disty;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    while(x1!=0){
        if (x1>=x2){
            distx = x1-x2;
        }
        else if (x1<x2){
            distx = x2-x1;
        }
        if (y1>=y2){
            disty = y1-y2;
        }
        else if (y1<y2){
            disty = y2-y1;
        }
        if (x1 == x2 && y1==y2){
            printf("0\n");
        }
        else if (x1==x2 || y1==y2){
            printf("1\n");
        }
        else if (distx==disty){
            printf("1\n");
        }
        else{
            printf("2\n");
        }




        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    }
    return 0;
}
