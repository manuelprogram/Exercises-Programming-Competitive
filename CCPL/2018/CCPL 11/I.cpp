#include <bits/stdc++.h>

using namespace std;

char cad[2000];

int main(){

    int n2;
    while(scanf("%d", &n2) != EOF){
        scanf("%s", &cad);
        int p = 0, n = 0, i = 0, mitad = 0;

        for(int j = 0; j < n2; j++){
            if(cad[j] == 'P') p++;
            else if(cad[j] == 'N') n++;
            else i++;
        }
        //printf("mdfdf %d\n", (n2>>) + 1);


        int Mmitad = (n2/2)+1;
         //printf("Mitad %d , p %d ,n %d , i %d, m-n2 %d\n", Mmitad, p, n, i, Mmitad- ((n2%2)? 0: 1));
        if(p >= Mmitad) printf("SI\n");
        else if(n >= Mmitad- ((n2%2)? 0: 1)) printf("NO\n");
        else printf("INDECISOS\n");
    }

    return 0;
}


