/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 19 de diciembre de 2016, 04:29 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int in, ar[100], acum;

int swap(int data) {
    int cn = 0;
    for (int i = 0; i < in; i++) {
        if (ar[i] < data) cn += data - ar[i];
    }
    return cn;
}

int main(int argc, char** argv) {
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    int set = 1;
    while (scanf("%d", &in) && in) {
        acum = 0;
        for (int i = 0; i < in; i++) {
            scanf("%d", &ar[i]);
            acum += ar[i];
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", set, swap(acum / in));
        set++;
    }
    return 0;
}

