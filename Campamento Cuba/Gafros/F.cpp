#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;//actual, padre

struct data{
    int ch=0;
    int fa=0;
    bool ac=1;
    bool vis=0;
}ar[500010];

vector<vi> v(500010);

void bfs(int p, int c){
    queue<ii> cola ;
    cola.push({p,0});
    ii par;
    while(cola.size()){
        par = cola.front(); cola.pop();
        int x = par.first, padre = par.second;
        if(!ar[x].vis){
            ar[x].vis = 1;
            ar[x].fa = padre;
            for(int i=0; i < v[x].size(); i++){
                if(ar[v[x][i]].vis){
                    continue;
                }
                ar[x].ch++;
                cola.push({v[x][i], x});
            }
        }
    }
}

int main(){
    ar[0].ac=0;
    int n,a,b,q,ans=1,x;
    scanf("%d",&n);
    n--;
    while(n--){
        scanf("%d %d",&a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(1,0);
    scanf("%d",&q);
    while(q--){
        scanf("%d",&x);
        if(x>0){
            if(ar[x].ac){
                ans+=ar[x].ch;
                ar[ar[x].fa].ch--;
                ar[x].ac=0;
                ans--;
                if(ar[ar[x].fa].ac){
                    ans++;
                }
            }
        }else{
            x*=-1;
            if(!ar[x].ac){
                ans-=ar[x].ch;
                ar[ar[x].fa].ch++;
                ar[x].ac=1;
                ans++;
                if(ar[ar[x].fa].ac){
                    ans--;
                }
            }
        }
        printf("%d\n",ans);
    }
return 0;
}
