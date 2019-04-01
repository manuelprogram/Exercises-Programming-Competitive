#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x,y,cn;
    bool m;
    while(scanf("%d",&n)==1){
        if(n&1 || n < 4){
            printf("NIE\n");
            continue;
        }
        int b=((n/4)<<1)+2;
        printf("0 0\n");
        cn=((n-b)>>1);
        m=!(n%4);

        if(m){
            printf("0 1\n");
            x=1;y=1;
        }else{
            x=0;y=1;
        }
        for(int i=0; i < cn; i++){
           if(!i && m){
              printf("%d %d\n",x,y);
           }else if(i){
              printf("%d %d\n",x,y);
           }
           printf("%d %d\n",x,y+2);
           printf("%d %d\n",x+1,y+2);
           printf("%d %d\n",x+1,y);
           x+=2;
        }
        printf("%d 1\n",b);
        printf("%d 0\n",b);
    }

return 0;
}
