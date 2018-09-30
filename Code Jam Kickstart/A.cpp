#include<bits/stdc++.h>

using namespace std;

int ar[5010]={0};
int main(){
    freopen ("in.txt","r",stdin);
    freopen ("out.txt","w",stdout);
   int t,n,k,a,b,cn=1;
   scanf("%d",&t);
   while(t--){
        memset(ar,0,sizeof(ar));
        scanf("%d",&n);
        while(n--){
            scanf("%d %d",&a,&b);
            if(a>b)swap(a,b);
            for(int i=a; i <=b; i++){
                ar[i]++;
            }
        }
        printf("Case #%d:",cn++);
        scanf("%d",&n);
        while(n--){
            scanf("%d",&a);
            printf(" %d",ar[a]);
        }
        printf("\n");
   }
return 0;
}
