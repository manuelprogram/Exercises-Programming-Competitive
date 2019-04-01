#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,d,p=31,md=(1e9)+7;
    vector<int> v;
    while(scanf("%d",&n)==1){
        for(int i=0; i < n; i++){
            scanf("%d",&d);
            v.push_back(d);
        }
        for(int i=1; i <= n; i++){
            printf("%.f ",1.0*v[i]*(pow(p,i*1.0)));
        }
        printf("\n");
    }
return 0;
}
