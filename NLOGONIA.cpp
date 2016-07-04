#include <bits/stdc++.h>

int main (){
    int x1, y1, x, y, k;
    scanf("%d", &k);
    while(k!=0){
        scanf("%d %d", &x, &y);
        for(int i = 0; i <k; i++){
            scanf("%d %d", &x1, &y1);
            if (x1 == x || y1 == y){
                printf("divisa\n");
            }
            else if (x1>x && y1>y){
                printf("NE\n");
            }
            else if (x1>x && y1<y){
                printf("SE\n");
            }
            else if (x1<x && y1>y){
                printf("NO\n");
            }
            else if (x1<x && y1<y){
                printf("SO\n");
            }
        }
        scanf("%d", &k);

    }
    return 0;
}
