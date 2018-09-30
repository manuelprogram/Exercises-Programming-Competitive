#include<bits/stdc++.h>

using namespace std;

int main(){
   string cad="248326122";
   string cad1=" 462";
   unsigned long long int n;
   for(int i=0; i < 4; i++){
        scanf("%llu",&n);
        if(n<=3){
            printf("%c",cad1[n]);
        }else{
            n-=3;
            printf("%c",cad[n%8]);
        }
   }
   printf("\n");

return 0;
}
