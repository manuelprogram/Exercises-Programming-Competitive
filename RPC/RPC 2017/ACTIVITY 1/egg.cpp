/* 
 * File:   egg.cpp
 * Author: PERSONAL
 *
 * Created on 11 de febrero de 2017, 04:47 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
        int cas, alt, dato, min = 1;
        char cad[100];
        scanf("%d %d", &cas, &alt);
        int max = alt;
        while (cas--) {
            scanf("%d %s", &dato, &cad);
            if (!strcmp(cad, "SAFE")) {
                if (dato > min) {
                    min = dato;
                }
            } else {
                if (dato < max) {
                    max = dato;
                }
            }
        }
        printf("%d %d\n", min + 1, max - 1);
    
    return 0;
}

