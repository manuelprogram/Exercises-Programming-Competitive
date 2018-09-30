/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 19 de diciembre de 2016, 03:15 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */

double factorial(double n) {
    if (n < 0) {
        return 0;
    } else if (n > 1) {
        return n * factorial(n - 1); /* Recursividad */
    }
    return 1; /* Condición de terminación, n == 1 */
}

double comb(double n, double m) {
    return factorial(n) / factorial(m) / factorial(n - m);
}

int main(int argc, char** argv) {
    int a, b;
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    while (scanf("%d %d", &a, &b) == 2 && a && b) {
        printf("%d things taken %d at a time is %.0lf exactly.\n", a, b, comb(a, b));
    }
    return 0;
}

