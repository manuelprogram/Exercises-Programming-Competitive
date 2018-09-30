/*
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 1 de abril de 2017, 01:17 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 *
 */
double funcion(int n) {
    return (double) (1 / (sqrt(n) + sqrt(n + 1)));
}

int main(int argc, char** argv) {
    int cas;
    double acum;
    unsigned long long int num;

    scanf("%d", &cas);
    while (cas--) {
        scanf("%llu", &num);
        printf("%llu\n",(num*(num+2)));
    }
    return 0;
}

