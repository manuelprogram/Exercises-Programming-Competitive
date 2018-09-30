/* 
 * File:   aircraft.cpp
 * Author: PERSONAL
 *
 * Created on 17 de junio de 2017, 07:41 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
struct mision {
    int a, b, c;

    mision(int r, int s, int t) {
        a = r;
        b = s;
        c = t;
    }

    bool operator<(const mision &m) const {
        if (a == m.a) {
            return (b == m.b) ? c < m.c : b < m.b;
        } else {
            return a < m.a;
        }
    }
};
vector<mision> n1;
vector<mision> n2;
int a, b, c;

vector<mision> subset(vector<mision> r) {
    vector<mision> aux;
    int n = r.size();
    bool ban;
    for (int i = 0; i < (1 << n); i++) {
        ban = 1;
        mision acum(0, 0, 0);
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                acum.a += r[j].a;
                acum.b += r[j].b;
                acum.c += r[j].c;
                if (acum.a > a || acum.b > b || acum.c > c) {
                    ban = 0;
                    break;
                }
            }
        }
        if (ban) aux.push_back(acum);
    }
    return aux;
}

int main(int argc, char** argv) {
    int cas, m, n, acuma, acumb, acumc, conjunto, ban;
    char carreta[1001];
    scanf("%d", &cas);
    while (cas--) {
        ban = 0;
        n1.clear();
        n2.clear();
        scanf("%d %d %d %d", &a, &b, &c, &m);
        n = m >> 1;
        mision data(0, 0, 0);
        for (int i = 0; i < m; i++) {
            scanf("%s %d %d %d", &carreta, &data.a, &data.b, &data.c);
            if (i < n) {
                n1.push_back(data);
            } else {
                n2.push_back(data);
            }
        }
        n1 = subset(n1);
        n2 = subset(n2);
        sort(n1.begin(), n1.end());
        sort(n2.begin(), n2.end());
        for (int i = 0; i < n1.size(); i++) {
            mision bus(a - n1[i].a, b - n1[i].b, c - n1[i].c);
            if(binary_search(n2.begin(),n2.end(),bus)){
                ban=1;
                break;
            }
        }

        printf(ban ? "POSSIBLE\n" : "IMPOSSIBLE\n");
    }
    return 0;
}

