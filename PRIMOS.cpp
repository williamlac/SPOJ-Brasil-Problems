#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){


    char palavra[21];
    while(scanf("%s", palavra)!=EOF){
        int i = 0;
        for(int k = 0; k<strlen(palavra); k++){
            if (palavra[k]>=97)
                i += palavra[k] -96;
            if (palavra[k]<97)
                i += palavra[k] - 38;
        }

        int cont = 0;
        for (int j = 2; j<i;j++){
            if(i%j == 0)
                cont++;
        }
        if (cont == 0)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");

    }
    return 0;
}
