#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long int ulli;

int main(){
    int ar[10]={0},ar2[10],m=2000,pos,n;
    string cad;
    cin>>cad;
    sort(cad.begin(),cad.end());

    for(int i=0; i < cad.size(); i++){
        n=cad[i]-'0';
        ar[n]++;
    }
     for(int i=1; i < 10; i++){
        if(ar[i]<m){
            m=ar[i];
            pos=i;
        }
     }
     if(ar[0]<m){
        printf("1");
        m=ar[0];
        pos=0;
     }
     for(int i=0; i < m+1; i++){
        printf("%d",pos);
     }
     printf("\n");
}
