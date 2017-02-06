/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 19 de diciembre de 2016, 02:25 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int train[60];
int cas, len;

int swap() {
    bool order;
    int aux;
    int cn = 0;
    do {
        order = 1;
        for (int i = 0; i < len - 1; i++) {
            if (train[i] > train[i + 1]) {
                cn++;
                aux = train[i];
                train[i] = train[i + 1];
                train[i + 1] = aux;
                if (i != len - 2) {
                    order = 0;
                }
            }
        }
    } while (!order);
    return cn;
}

int main(int argc, char** argv) {
//    freopen("in2.txt", "r", stdin);
//    freopen("out2.txt", "w", stdout);

    scanf("%d", &cas);
    while (cas--) {
        scanf("%d", &len);
        for (int i = 0; i < len; i++) {
            scanf("%d", &train[i]);
        }
        printf("Optimal train swapping takes %d swaps.\n",swap());
    }

    return 0;
}

