#include<bits/stdc++.h>

using namespace std;

int main(){
    double v, l,a,t=0;
    int n;
    scanf("%lf",&v);
    scanf("%d",&n);
    while(n--){
        scanf("%lf %lf",&l, &a);
        t+=a*l;
    }
    printf("%.7f\n",t*v);
}
