/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 11 de marzo de 2017, 02:51 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
const int len = 1e8;
int paint[len] = {0};
int tam, men, desde, hasta;

void marcar() {
    for (int i = desde - 1; i < hasta; i++) paint[i]++;
}

bool cmp(int a, int b) {
    return a>b;
}

int main(int argc, char** argv) {
    freopen("in.txt", "r", stdin);

    while (scanf("%d %d", &tam, &men) != EOF) {
        for (int i = 0; i < men; i++) {
            scanf("%d %d", &desde, &hasta);
            printf("%d %d\n", desde, hasta);
            marcar();
        }
        sort(paint, paint + tam);
        for (int i = 0; i < tam; i++) {
            printf("%d\n", paint[i]);
        }
    }
    return 0;
}

