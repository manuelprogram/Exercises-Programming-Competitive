/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 17 de diciembre de 2016, 10:56 AM
 */

#include <bits/stdc++.h>

using namespace std;

#define length(x) (sizeof(x) / sizeof(*x))//con el apuntador devuelve el valor de 4 sin el devuelve 4 veces la longitud 

int in[9];

int recorrido(int b, int g, int c) {
    int acum = 0;
    for (int i = 0; i < 9; i++) {
        if (i != b && i != g && i != c) {
            acum += in[i];
        }
    }
    return acum;
}

int main(int argc, char** argv) {
    int i;
    int min, pos;
    string view[] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
    int res[6];
    while (scanf("%d", &in[0]) != EOF) {
        min = INT_MAX;
        for (i = 1; i < 9; i++) {
            scanf("%d", &in[i]);
        }
        res [0] = recorrido(0, 5, 7); // BCG
        res [1] = recorrido(0, 4, 8); // BGC
        res [2] = recorrido(2, 3, 7); // CBG
        res [3] = recorrido(2, 4, 6); // CGB
        res [4] = recorrido(1, 3, 8); // GBC
        res [5] = recorrido(1, 5, 6); // GCB

        for (i = 0; i < 6; i++) {
            if (res[i] < min) {
                min = res[i];
                pos = i;
            }
        }
        printf("%s %d\n", view[pos].c_str(), min);
    }
    return 0;
}

