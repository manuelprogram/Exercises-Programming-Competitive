#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int main(){
    int n,pos,d,tengo,may=0,cn=1,mj=0;
    vector<int> g,j;

    while(scanf("%d %d", &n,&pos)==2){

        for(int i = 1; i <= n; i++){
            scanf("%d", &d);
            if(i==pos){
                tengo=d;
            }else{
                g.push_back(d);
            }
        }
        for(int i = 1; i <= n; i++){
            scanf("%d", &d);
            may=max(may,d);
            j.push_back(d);
        }

        if(n==1){
            printf("%d\n",cn);
            continue;
        }
        sort(j.begin(),j.end());
        n--;
        for(int i = 0; i < n; i++){
            if(tengo+may<g[i]+j[mj]){
                n--;
                cn++;
            }else{
                mj++;
            }
        }
        printf("%d\n",cn);
    }
    return 0;
}
