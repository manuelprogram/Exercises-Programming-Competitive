/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 7 de enero de 2017, 05:26 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    char cad[10001];
    int i, c;
    while (scanf("%s", &cad) && (strlen(cad) > 1 || cad[0] != '0')) {
        i = c = 0;
        while (cad[i]) {
            c = c * 10 + (cad[i] - '0');
            c %= 11;
            i++;
        }
        if (c == 0) {
            printf("%s is a multiple of 11.\n", cad);
        } else {
            printf("%s is not a multiple of 11.\n", cad);
        }
    }
    return 0;
}

