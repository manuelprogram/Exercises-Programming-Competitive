/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 * 
 espacio en blanco
 * Created on 29 de diciembre de 2016, 08:54 PM
 */

#include <bits/stdc++.h>

using namespace std;

static int f, c, cn[110][110] = {0}, pos = 1;
static char cad[110][110];

void marcar() {
    for (int f1 = 0; f1 < f; f1++) {
        for (int c1 = 0; c1 < c; c1++) {
            if (cad[f1][c1] == '*') {
                for (int f2 = f1 - 1; f2 <= f1 + 1; f2++) {
                    for (int c2 = c1 - 1; c2 <= c1 + 1; c2++) {
                        if (f2 >= 0 && f2 < f && c2 >= 0 && c2 < c) {
                            cn[f2][c2]++;
                        }
                    }
                }
            }
        }
    }
}

int main(int argc, char** argv) {
    while (scanf("%d %d", &f, &c) && f && c) {
        getchar();
        for (int i = 0; i < f; i++) {
            gets(cad[i]);
        }
        if (pos != 1)
            printf("\n");
        marcar();
        printf("Field #%d:\n", pos);
        pos++;
        for (int i = 0; i < f; i++) {
            for (int j = 0; j < c; j++) {
                if (cad[i][j] == '*') {
                    printf("*");
                } else {
                    printf("%d", cn[i][j]);
                }
            }
            printf("\n");
        }
        memset(cn, 0, sizeof (cn));
    }
    return 0;
}

