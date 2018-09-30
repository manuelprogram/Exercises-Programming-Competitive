/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 5 de enero de 2017, 02:54 PM
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    char cad[100];
    int cas, dona, acum = 0;
    scanf("%d", &cas);
    while (cas--) {
        scanf("%s", &cad);
        if (strcmp(cad, "donate") == 0) {
            scanf("%d", &dona);
            acum += dona;
        } else {
            printf("%d\n", acum);
        }
    }
    return 0;
}

