#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int ulli;

int main(){

    int n;
    while(scanf("%d", &n) != EOF){
        if(n<4){
            printf("%d\n", 1);
            continue;
        }
        printf("%d\n", n-2);
    }

    return 0;
}
