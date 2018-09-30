/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 5 de enero de 2017, 11:47 AM
 */

#include <bits/stdc++.h>

using namespace std;

/*
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 * 
 */
int main(int argc, char** argv) {

    long power[50];
    bool on[50];
    int count = 1, N, M, C, tmp;
    while (scanf("%d %d %d", &N, &M, &C) && N) {
        memset(power, 0, sizeof (power));
        memset(on, 0, sizeof (on));
        for (int i = 0; i < N; i++) {
            scanf("%ld", &power[i]);
        }
        long current = 0;
        long high = 0;
        for (int i = 0; i < M; i++) {
            scanf("%d", &tmp);
            tmp--;
            if (on[tmp]) {
                on[tmp] = false;
                current -= power[tmp];
            } else {
                on[tmp] = true;
                current += power[tmp];
                if (current > high)high = current;
            }
        }
        printf("Sequence %d\n", count);
        if (high > C) {
            printf("Fuse was blown.\n");
        } else {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %ld amperes.\n", high);
        }
        printf("\n");

        count++;
    }
    return 0;
}

