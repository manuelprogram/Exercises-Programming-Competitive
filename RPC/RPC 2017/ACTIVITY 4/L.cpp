#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

ulli euler(ulli n){
 ulli res=n;
 for(int i=2; i*i <=n; i++){
    if(n%i==0){
        while(n%i==0){
            n/=i;
        }
        res-=res/i;
    }
 }
 if(n>1){
    res-=res/n;
 }
return res;
}

ulli sum(ulli n){
 return (n*(n+1))>>1;
}


int main(){
  ulli cas,n,no;
  double res;
  scanf("%llu",&cas);
  while(cas--){
   scanf("%llu",&n);
   ulli e=euler(n),no;
   no=(n-1)-e;
   res=(1.0*sum(n-1)/n)-no*0.5;
   printf("%llu %.4lf\n",e,res);
  }
return 0;
}
