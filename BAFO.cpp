#include<bits/stdc++.h>

int main (){
    int r, a, b;
    int A=0, B=0, teste = 1;
    scanf("%d", &r);
    while(r!=0){
        for(int i = 0; i<r; i++){
            scanf("%d %d", &a, &b);
            A+=a;
            B+=b;
        }
        if(A>B)
            printf("Teste %d \nAldo\n\n", teste);
        else
            printf("Teste %d \nBeto\n\n", teste);
        A=0;
        B=0;
        teste++;
        scanf("%d", &r);
    }


    return 0;
}
