#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,e,c,f;
    while(scanf("%d %d",&n,&f)==2){
        c=(n*(n-1))>>1;
        printf("%.1f\n",(float)(((float)c/n)+(f*0.5)));
    }
return 0;
}
