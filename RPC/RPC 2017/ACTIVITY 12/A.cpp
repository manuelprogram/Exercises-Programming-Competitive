#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int ulli;

ulli mcd(ulli a, ulli b){
    return  a? mcd(b %a, a): b;
}

void simplificar(ulli &num, ulli &den){
    ulli m = mcd(num, den);
    if(m > 1){
        num = num/m;
        den = den/m;
    }
}

int main(){
    //freopen("salida.txt", "w", stdout);
    ulli n, num, den;
    while(scanf("%llu", &n) != EOF){
        num = 3*n;
        den = (n << 1) + 1;

        simplificar(num, den);

        if(den == 1) printf("%llu\n", num);
        else printf("%llu/%llu\n", num, den);
    }

    return 0;
}
