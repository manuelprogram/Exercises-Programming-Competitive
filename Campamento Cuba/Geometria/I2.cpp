#include<bits/stdc++.h>

using namespace std;

struct punto{
    int x;
    int y;
}in,p;

vector<punto> v;

int main(){
    int n,pu,uu,dd;
    scanf("%d",&n);
    while(n--){
        uu=0;
        scanf("%d",&pu);
        while(pu--){
            scanf("%d %d",&in.x,&in.y);
            if(abs(in.x+in.y)>=uu){
                uu=abs(in.x+in.y);
                p.x=in.x;
                p.y=in.y;
            }
        }
        printf("punto max %d %d\n",p.x,p.y);

    }
return 0;
}
