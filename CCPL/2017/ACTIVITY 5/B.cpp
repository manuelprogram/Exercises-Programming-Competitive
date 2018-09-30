/* 
 * File:   babai.cpp
 * Author: PERSONAL
 *
 * Created on 6 de mayo de 2017, 02:26 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
const int MAX = 10;

vector<int> g1[MAX];
vector<int> g2[MAX];
int tc, len1, len2, a, b, ar1[MAX], ar2[MAX], m1[3][3], m2[3][3];

void clear() {
    for (int i = 0; i < MAX; i++) {
        g1[i].clear();
        g2[i].clear();
    }
}

bool validar() {
    for (int i = 0; i < MAX; i++) {
        ar1[i] = g1[i].size();
        ar2[i] = g2[i].size();
    }
    sort(ar1, ar1 + 3);
    sort(ar2, ar2 + 3);
    for (int i = 0; i < 3; i++) {
        if (ar1[i] != ar2[i]) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char** argv) {
    scanf("%d", &tc);
    while (tc--) {
        scanf("%d", &len1);
        clear();
        for (int i = 0; i < len1; i++) {
            scanf("%d %d", &a, &b);
            g1[a - 1].push_back(b - 1);
            g1[b - 1].push_back(a - 1);
        }
        scanf("%d", &len2);
        for (int i = 0; i < len2; i++) {
            scanf("%d %d", &a, &b);
            g2[a - 1].push_back(b - 1);
            g2[b - 1].push_back(a - 1);
        }
        printf(validar() ? "yes\n" : "no\n");
    }
    return 0;
}

