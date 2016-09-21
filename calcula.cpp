//Created by William Lacerda on September 21st, 2016
//http://br.spoj.com/problems/CALCULA/
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    int m, res = 0, k=1, n1, n2;
    char op;
  	scanf("%d", &m);

  	while (m!=0) {

        scanf("%d%c%d", &n1, &op, &n2);
        res = (op == '+') ? n1 + n2 : n1 - n2;
      	for(int i = 4 ; i < (m*2)-1; i+=2)
      	{
      			scanf("%c%d", &op, &n2);
      			res = (op == '+') ? res + n2 : res - n2;
      	}

        cout<<"Teste "<<k++<<endl<<res<<endl<<endl;
        scanf("%d", &m);
  }
  return 0;
}
