/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 11 de marzo de 2017, 05:03 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
const int tam = 2e6;
unsigned long long int a[tam], v;

int main(int argc, char** argv) {
    freopen("in.txt", "r", stdin);

    int n, q, b, e;
    scanf("%d %d", &n, &q);
    for(int i=0; i < n; i++) 
    {
        scanf("%llu", &a[i]);
    }
    for (int i = 0; i < q; i++) {
        scanf("%u %d %d", &v, &b, &e);
        for (; b <=e; b++) 
        {
            v -= (v / a[b - 1]) * a[b - 1];
        }
        printf("%llu\n", v);
    }
    return 0;
}

