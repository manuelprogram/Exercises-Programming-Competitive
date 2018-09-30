#include<bits/stdc++.h>

using namespace std;
unsigned long long int m[110][110]={0};

void triangulo(){
    for(int i=0; i < 102; i++)m[i][0]=1;
    int cn=2;
    for(int i=1; i < 102;i++){
      for(int j=1; j < cn;j++){
        m[i][j]=m[i-1][j-1]+m[i-1][j];
      }
      cn++;
    }
}

void imp(){

    for(int i=0; i < 10; i++){
      for(int j=0; j < 10;j++){
        if(m[i][j]){
            printf("%llu ",m[i][j]);
        }
      }
      printf("\n");
    }
}

int main(){
    //freopen("salida.txt", "w", stdout);
   unsigned long long int n,de;
   triangulo();
   //imp();
   int casos;
   scanf("%d",&casos);
   for(int i = 0; i < casos; i++){
    scanf("%llu",&n);
      if(!n){
        printf("1\n");
      }else{
          if(n == 1){
            printf("x+y\n");
            continue;
          }
          printf("x^%llu+",n);
           de=n;
          for(int i=1; i < n; i++){
             if(!(i-1)&&(de-1)==1){
                printf("%lluxy+",m[n][i]);
             }else if(!(i-1)){
               printf("%llux^%lluy+",m[n][i],--de);
             }else if((de-1)==1){
                printf("%lluxy^%d+",m[n][i],i);
             }else{
                printf("%llux^%lluy^%d+",m[n][i],--de,i);
             }
           }
           printf("y^%llu\n",n);

    }
   }
return 0;
}
