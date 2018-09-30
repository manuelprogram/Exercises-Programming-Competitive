#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef pair<lli, lli> par;

int n, k;

struct casas{
    lli dis, cartas, pos;F
} arr[1005];

bool cmp(casas a, casas b){
    return a.dis < b.dis;
}

int main(){
    lli x, m;
    while(scanf("%d %d", &n, &k) != EOF){

        for(int i = 0; i < n; i++){
            scanf("%lld %lld", &x, &m);
            arr[i].pos = x;
            if(x < 0) x = x * -1;
            arr[i].dis =x;
            arr[i].cartas = m;
        }
        sort(arr, arr+n, cmp);

        int cartas;
        for(int i = 0; i < n; i++){
            scanf("%lld %lld", &x, &m);
            arr[i].pos = x;
            if(x < 0) x = x * -1;
            arr[i].dis =x;
            arr[i].cartas = m;
        }
    }
    return 0;
}
