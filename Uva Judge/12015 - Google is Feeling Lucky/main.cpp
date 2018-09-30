/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 4 de enero de 2017, 09:06 PM
 */

#include <bits/stdc++.h>


using namespace std;

/*
 * 
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 */
int main(int argc, char** argv) {

    int cas, i, max, cn = 1;
    string cad;
    char ar[10][1000];
    int pes[10];
    scanf("%d", &cas);
    while (cas--) {
        i = 10;
        max = 0;
        while (i--) {
            scanf("%s %d", &ar[i], &pes[i]);
            if (pes[i] > max)max = pes[i];
        }
        i = 10;
        printf("Case #%d:\n", cn);
        while (i--) {
            if (pes[i] == max)
                printf("%s\n",ar[i]);
        }
        cn++;
    }
    return 0;
}

