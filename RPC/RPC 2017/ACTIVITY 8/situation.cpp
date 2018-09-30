#include <bits/stdc++.h>

using namespace std;
typedef long double ld;

vector<long double> ramas;

bool posible(ld a, ld b, ld c){
    ld aux = ((a + b - c) * (a + c - b) * (b  + c - a)) / (a * b * c);
    return aux > 0.5;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long double a, b, c, x;

    while(cin >> n){
        ramas.clear();
        bool pos = false;

        for(int i = 0; i < n; i++){
            cin >> x;
            ramas.push_back(x);
        }
        sort(ramas.begin(), ramas.end());

        for(int i = 0; i < n; i++){
            pos = (pos || posible(ramas[i], ramas[(i + 1) % n], ramas[(i + 2) % n]));
        }

        if(pos) cout << "possible\n";
        else cout << "impossible\n";
    }


    return 0;
}
