/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 26 de diciembre de 2016, 12:18 PM
 */

#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <iosfwd>
#include <cstdio>//gets

#define reiniciar(a,b)  memset(a,b,sizeof(a))

using namespace std;

char m[100][100];
bool visit[100][100];
int cn, i, len;
int df[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dc[] = {1, 1, 0, -1, -1, -1, 0, 1};

/*
 * 
 */

void find(int f, int c) {
    if (f>-1 && f < i && c>-1 && c < len && visit[f][c] == 0 && m[f][c] == 'W') {
        cn++;
        visit[f][c] = 1;
        for (int j = 0; j < 8; j++)
            find(f +df[j], c+dc[j]);
    }
}

int main(int argc, char** argv) {
//        freopen("in.txt", "r", stdin);
//        freopen("out.txt", "w", stdout);

    int cas, f, c;
    bool blank = false;
    scanf("%d", &cas);
    getchar();
    getchar();
    while (cas--) {
        i = 0;
        cn = 0;
        if (blank) printf("\n");
        blank = true;
        while (gets(m[i]) && strlen(m[i]) > 0) {
            if (i == 0) len = (strlen(m[i]));
            if (m[i][0] == 'L' || m[i][0] == 'W') {
                i++;
            } else {
                sscanf(m[i], "%d %d", &f, &c);
                cn = 0;
                reiniciar(visit, false);
                find(f - 1, c - 1);
                printf("%d\n", cn);
            }
        }
    }
    return 0;
}

