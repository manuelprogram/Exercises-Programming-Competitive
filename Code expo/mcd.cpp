#include<bits/stdc++.h>

using namespace std;

int mcm(int a, int b){
    return a*b/__gcd(a,b);
}

int main(){
    int n,a,b,c;
    while(scanf("%d",&n)!=EOF){
        scanf("%d %d %d",&a,&b,&c);
        printf("%d\n",mcm(mcm(a,b),c)-n);
    }
return 0;
}
