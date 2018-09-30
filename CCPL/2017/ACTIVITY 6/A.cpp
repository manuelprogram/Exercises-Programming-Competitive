/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 27 de mayo de 2017, 03:01 PM
 */

#include <bits/stdc++.h>

using namespace std;

vector<int> grafo[2017];
bool c[2017] = {0};
int n, m, x, y, z;

void reset() {
    for (int l = 0; l < n; l++) {
        grafo[l].clear();
    }
}

void dfs(int p) {
    if (c[p]) return;
    c[p] = true;
    for (int j = 0; j < grafo[p].size(); j++)
        dfs(grafo[p][j]);
}

bool vis() {
    for (int j = 0; j < n; j++) {
        if (!c[j]) return 0;
    }
    return 1;
}

int main() {
    while (scanf("%d %d", &n, &m), n, m) {
        reset();
        for (int i = 0; i < m; i++) {
            scanf("%d %d %d", &x, &y, &z);
            if (z == 1) {
                grafo[x - 1].push_back(y - 1);
            } else {
                grafo[x - 1].push_back(y - 1);
                grafo[y - 1].push_back(x - 1);
            }
        }

        bool flag = 1;
        for (int k = 0; k < n; k++) {
            memset(c, 0, sizeof (c));
            dfs(k);
            if (!vis()) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
    return 0;
}

