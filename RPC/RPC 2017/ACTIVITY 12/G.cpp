#include<bits/stdc++.h>

using namespace std;

const int maxi=1300060;

vector<int> prime;

bool nprime[maxi];

void Criba(){
 nprime[0]=nprime[1]=1;
 for(int i=2; i < maxi; i++){
    if(!nprime[i]){
        prime.push_back(i);
        if(i * 1ll * i <= maxi){
            for(int j=i*i; j < maxi; j+=i){
                nprime[j]=1;
            }
        }
    }
 }
}

void view(){
 for(int i=0; i < 30; i++){
   printf("%d,",prime[i]);
 }
 printf("\n");
}

int main(){
    Criba();
    //view();
    //printf("%d\n",prime.size());
    int a,b;
    while(scanf("%d %d",&a,&b),a,b){
       if(a>b){
          swap(a,b);
       }
       vector<int>::iterator pos=lower_bound(prime.begin(), prime.end(), a);
       int i=pos-prime.begin(),aux,ban=0,mayor=0;
       while(prime[i]<=b ){
           if(!ban){
            aux=prime[i];
            ban=1;
           }else{
              mayor=max(mayor,prime[i]-aux);
              aux=prime[i];
           }
           i++;
       }
       if(!mayor){
         printf("NULL\n");
       }else{
         printf("%d\n",mayor);
       }
    }
return 0;
}
