/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 11 de marzo de 2017, 01:20 PM
 */
#include <bits/stdc++.h>

using namespace std;

/*
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 * 
 */

char cad[1024];
int m[51][26];
int len;

void mostrar() {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 26; j++) {
            printf("[%d] ", m[i][j]);
        }
        printf("\n");
    }
}

void marcar(){
    for (int i = 0; i < len; i++) {
        m[i][cad[i] - 'a'] = 1;
    }
}

int main(int argc, char** argv) {
    while (scanf("%s", &cad) != EOF) {
        len = strlen(cad);
        marcar();
        for (int i = 1; i < 26; i++) {
            m[0][i] = max(m[0][i], m[0][i - 1]);
        }
        for (int i = 1; i < len; i++) {
            m[i][0] = max(m[i][0], m[i - 1][0]);
        }
        for (int f = 1; f < len; f++) {
            for (int c = 1; c < 26; c++) {
                if (m[f][c - 1] == m[f - 1][c]) {
                    m[f][c] += m[f][c - 1];
                }else{
                     m[f][c]=max(m[f][c - 1], m[f - 1][c]);
                }
            }
        }
        printf("%d\n",26-m[len-1][25]);
        memset(m, 0, sizeof (m));
    }
    return 0;
}

