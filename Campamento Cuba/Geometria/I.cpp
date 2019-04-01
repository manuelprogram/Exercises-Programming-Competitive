#include<bits/stdc++.h>

using namespace std;
struct punto{
    int x;
    int y;
}in,u,d;
int main(){
    int n,p,uu,dd;
    scanf("%d",&n);
    while(n--){
        uu=0;dd=2000000;
        scanf("%d",&p);
        while(p--){
            scanf("%d %d",&in.x,&in.y);
            if(abs(in.x-in.y)<dd){
                dd=abs(in.x-in.y);
                d.x=in.x;
                d.y=in.y;
            }

            if(abs(in.x+in.y)>uu){
                uu=abs(in.x+in.y);
                u.x=in.x;
                u.y=in.y;
            }
        }
        printf("uu: %d %d\n",u.x,u.y);
        printf("dd: %d %d\n",d.x,d.y);

    }
return 0;
}
