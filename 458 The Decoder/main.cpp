/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 29 de diciembre de 2016, 02:30 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 */

int main(int argc, char** argv) {
    char cad[20000], i;
    while (gets(cad)) {
        i = 0;
        while (cad[i]) {
            printf("%c", cad[i] - 7);
            i++;
        }
        printf("\n");
    }
    return 0;
}

