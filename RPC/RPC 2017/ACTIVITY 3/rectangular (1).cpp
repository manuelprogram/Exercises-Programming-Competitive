#include <bits/stdc++.h>
#include <inttypes.h>

using namespace std;

__int128 comb2(__int128 s) {
    return (s * (s - 1)) >> 1;
}

__int128 comb3(__int128 m) {
    return m * (m - 1)*(m - 2) / 6;
}

int main() {
    int cas, i = 1;
    unsigned long long int numero, res2;
    __int128 s, f, c, e, res, mod = 1000000007, n, a1, a2;

    scanf("%d", &cas);
    while (cas--) {
        scanf("%llu", &numero);
        n = (__int128) numero;
        f = (n >> 1) + 1;
        e = n - f + 1;
        s = (f * ((comb2(f) + 1) + comb2(f + 1))) >> 1;
        
        a1 = ((s % mod) * (e % mod)) % mod;
        a2 = ((f % mod) * ((comb2(e) * f + comb3(e + 1)) % mod)) % mod;
        res = (a1 + a2) % mod;
    
        
        res2 = (unsigned long long int) res;
        printf("Case #%d: %llu\n", i++, res2);
    }
    return 0;
}
