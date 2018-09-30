/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 6 de enero de 2017, 04:53 PM
 */

#include <bits/stdc++.h>

using namespace std;

char cad[1000];

int num() {
    int cn = 0, i = 0;
    while (cad[i]) {
        if (cad[i] > 96 && cad[i] < 123) {
            cn += cad[i] - 96;
        } else if (cad[i] > 64 && cad[i] < 91) {
            cn += cad[i] - 64;
        }
        i++;
    }
    int sum;
    do {
        sum = 0;
        while (cn) {
            sum += cn % 10;
            cn /= 10;
        }
        cn = sum;
    } while (sum > 9);
    return sum;
}

int main(int argc, char** argv) {
    double cn1, cn2;
    while (gets(cad)) {
        cn1 = num();
        gets(cad);
        cn2 = num();
        if (cn1 == 0 && cn2 == 0) {
            printf("\n");
        } else {
            if (cn2 > cn1) {
                double a = cn1;
                cn1 = cn2;
                cn2 = a;
            }
            if (cn1 != 0) {
                printf("%.2lf %c\n", (cn2 * 100) / cn1, '%');
            } else {
                printf("0.00 %\n");
            }
        }
    }
    return 0;
}

