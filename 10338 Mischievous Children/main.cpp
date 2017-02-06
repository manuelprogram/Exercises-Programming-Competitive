/* 
 * File:   main.cpp
 * Author: PERSONAL
 *INTESERANTEEE
 * Created on 22 de diciembre de 2016, 10:35 AM
 */

#include <cstdlib>
#include <algorithm>
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

/*
 * 
 */
double fac[21];

void Fac() {
    fac[1] = 1;
    double m = 1;
    int i = 2;
    for (; i < 21; i++) {
        m *= i;
        fac[i] = m;
    }
}

int main(int argc, char** argv) {
            freopen("in.txt", "r", stdin);
    //        freopen("out.txt", "w", stdout);
    Fac();

    int cas, w = 1, i, cn;
    double acum;
    char cad[100];
    scanf("%d", &cas);
    while (cas--) {
        //-----leo
        scanf("%s", &cad);
        int len = strlen(cad);
        sort(cad, cad + len);
        strcat(cad, ".");
        //-----ordeno
        int sig = 1;
        i = 0;
        cn = 1;
        acum = 1;
        while (sig != len + 1) {
            if (cad[i] == cad[sig]) {
                cn++;
            } else {
                if (cn != 1) {
                    acum *= fac[cn];
                    cn = 1;
                }
                i = sig;
            }
            sig++;
        }
        printf("Data set %d: %.0f\n", w, (fac[len] / acum));
        w++;
    }
    return 0;
}

