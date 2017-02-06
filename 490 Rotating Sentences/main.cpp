/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 19 de diciembre de 2016, 03:49 PM
 */

#include <bits/stdc++.h>
#include <string.h>
using namespace std;

/*
 * 
            freopen("in.txt", "r", stdin);
            freopen("out.txt", "w", stdout);
 */
int main(int argc, char** argv) {
    char line1[1000][1000];
    int fila = 0, col = 0, j, i = 0;
    while (gets(line1[col])) {//siempre guardar un espacio
        if (strlen(line1[col]) > fila) fila = strlen(line1[col]);
        col++;
    }

    for (i = 0; i < fila; i++) {
        j = col;
        while (j--) {
            printf("%c", (i > (strlen(line1[j]) - 1) ? ' ' : line1[j][i]));
        }
        printf("\n");
    }
    return 0;
}

