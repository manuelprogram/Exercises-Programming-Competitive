/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 23 de diciembre de 2016, 07:48 PM
 */

#include <stdio.h>
#include <algorithm>

using namespace std;

/*
 * 
#include <cstdlib>
   freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 */

int main(int argc, char** argv) {
    int acum, cn, la, lb, a, b, dra[20000] = {0}, tra[20000] = {0}, i, j;
    while (scanf("%d %d", &a, &b) && a) {
        la = a;
        lb = b;
        while (la--) {
            scanf("%d", &dra[la]);
        }
        while (lb--) {
            scanf("%d", &tra[lb]);
        }
        sort(dra, dra + a);
        sort(tra, tra + b);
        if (a > b) {
            printf("Loowater is doomed!\n");
        } else {
            i = 0;
            j = 0;
            cn = 0;
            acum = 0;
            while (i < a && j < b) {
                if (dra[i] <= tra[j]) {
                    cn++;
                    acum += tra[j];
                    i++;
                }
                j++;
            }
            if (cn == a) {
                printf("%d\n", acum);
            } else {
                printf("Loowater is doomed!\n");
            }
        }
    }
    return 0;
}

