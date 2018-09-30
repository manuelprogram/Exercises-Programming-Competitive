#include <bits/stdc++.h>

using namespace std;

char cad[150000];

int main(){
    int casos, l, con = 1;
    scanf("%d", &casos);
    int memo[100];

    while (casos--){
        scanf("%s", &cad);
        memset(memo, 0, sizeof(memo));
        l = strlen(cad);
        int pun = 0;

        for(int i = 0; i < l; i++){
            switch(cad[i]){
                case '<':
                    pun--;
                    if(pun == -1) pun = 99;
                    break;

                case '>':
                    pun++;
                    if(pun == 100) pun = 0;
                    break;

                case '+':
                    memo[pun]++;
                    if(memo[pun] == 256) memo[pun] = 0;
                    break;

                case '-':
                    memo[pun]--;
                    if(memo[pun] == -1) memo[pun] = 255;
                    break;
            }
        }

        printf("Case %d: ", con);
        for(int i = 0; i < 99; i++){
            printf("%.2X ", memo[i]);
        }
        printf("%.2X\n", memo[99]);
        con++;
    }

    return 0;
}

