#include <bits/stdc++.h>

using namespace std;

#define dprint(v) cerr << #v"=" << v << endl //;)
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
typedef __int128 ll;
typedef unsigned long long int ulli;

int ar[] = {2, 3, 5, 7, 11, 13, 17, 19, 23};

//ll gcd(ll a, ll b){return a?gcd(b %a, a):b;}

ll mulmod(ll a, ll b, ll c) { //returns (a*b)%c, and minimize overfloor
    return (a*b) % c;
}

ll expmod(ll b, ll e, ll m) {//O(log b)
    if (!e) return 1;
    ll q = expmod(b, e >> 1, m);
    q = mulmod(q, q, m);
    return e & 1 ? mulmod(b, q, m) : q;
}

bool es_primo_prob(ll n, int a) {
    if (n == a) return 1;
    ll s = 0, d = n - 1;
    while (!(d & 1)) s++, d >>= 1;

    ll x = expmod(a, d, n);
    if ((x == 1) || (x + 1 == n)) return 1;

    forn(i, s - 1) {
        x = mulmod(x, x, n);
        if (x == 1) return 0;
        if (x + 1 == n) return 1;
    }
    return 0;
}

bool rabin(ll n) { //devuelve true si n es primo
    if (n == 1) return 0;
    forn(j, 9)
    if (!es_primo_prob(n, ar[j]))
        return 0;
    return 1;
}

ll rho(ll n) {
    if (!(n & 1)) return 2;
    ll x = 2, y = 2, d = 1;
    ll c = rand() % n + 1;
    while (d == 1) {
        x = (mulmod(x, x, n) + c) % n;
        y = (mulmod(y, y, n) + c) % n;
        y = (mulmod(y, y, n) + c) % n;
        if (x - y >= 0) d = __gcd(x - y, n);
        else d = __gcd(y - x, n);
    }
    return d == n ? rho(n) : d;
}

map<ulli, ulli> prim;

void factRho(ll n) { //O (lg n)^3. un solo numero
    if (n == 1) return;
    if (rabin(n)) {
        prim[n]++;
        return;
    }
    ll factor = rho(n);
    factRho(factor);
    factRho(n / factor);
}

int main() {
    //freopen("salida.txt", "w", stdout);
    ulli n, m;
    scanf("%llu", &n);
    for (int i = 0; i < n; i++) {
        prim.clear();
        scanf("%llu", &m);
        factRho(m);
        int l = prim.size();
        ulli n1, n2;

        for (map<ulli, ulli>::iterator it = prim.begin(); it != prim.end(); it++) {
            l--;
            n1 = (it)->first;
            n2 = (it)->second;
            for (int i = 1; i < n2; i++) {
                printf("%llu ", n1);
            }
            if (l) printf("%llu ", n1);
            else printf("%llu\n", n1);
        }
    }
    return 0;
}
