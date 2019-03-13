#include<bits/stdc++.h>

using namespace std;

struct data{
    int ch=0;
    int fa=0;
    bool ac=1;
}ar[500010];

int main(){
    ar[0].ac=0;
    int n,a,b,q,ans=1,x;
    scanf("%d",&n);
    n--;
    while(n--){
        scanf("%d %d",&a, &b);
        ar[b].fa=a;
        ar[a].ch++;
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d",&x);
        if(x>0){
            ans+=ar[x].ch;
            ar[ar[x].fa].ch--;
            ar[x].ac=0;
            ans--;
            if(ar[ar[x].fa].ac){
                ans++;
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
