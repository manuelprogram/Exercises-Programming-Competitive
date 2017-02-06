/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 12 de enero de 2017, 04:41 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 */
int main(int argc, char** argv) {
    int n, b, h, w, p, a, min, total;
    while (scanf("%d %d %d %d", &n, &b, &h, &w) != EOF) {
        min = 1000000;
        while (h--) {
            scanf("%d", &p);
            total = (p * n);
            for (int i = 0; i < w; i++) {
                scanf("%d",&a);
                if (a >= n && total <= b && total < min) {
                    min = total;
                }
            }
        }
        if (min == 1000000) {
            printf("stay home\n");
        } else {
            printf("%d\n", min);
        }
    }
    return 0;
}

