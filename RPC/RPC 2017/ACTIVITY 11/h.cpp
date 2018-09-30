#include<bits/stdc++.h>

using namespace std;

int n,num,ar[100009]={0},mon=0;
bool si=0;

int main(){
while(scanf("%d",&n)==1){
    for(int i=1; i <= n; i++){
        scanf("%d",&ar[i]);
    }
    for(int i=1; i <= n; i++){
       if(ar[i]>ar[i-1]&&!si){
         si=1;
         mon++;
         //printf("%d\n",ar[i]);
       }else{
          if(ar[i]<ar[i-1]&&si){
            si=0;
          }
       }
    }
    printf("%d\n",mon);
}
return 0;
}
