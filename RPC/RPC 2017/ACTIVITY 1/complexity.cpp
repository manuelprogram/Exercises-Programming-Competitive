/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 11 de febrero de 2017, 01:23 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
    freopen("in.txt", "r", stdin);
 */
bool cmp(int a, int b) {
    return (a > b);
}

int main(int argc, char** argv) {
    char cad[1000];
    int ar[27];
    int i = 0;
    gets(cad);
    memset(ar, 0, sizeof (ar));
    while (cad[i]) {
        ar[cad[i] - 'a']++;
        i++;
    }
    sort(ar, ar + 27, cmp);
    int cn = 0;
    if (ar[2]) {
        i = 2;
        while (ar[i]) {
            cn += ar[i];
            i++;
        }
    }
    printf("%d\n", cn);
    return 0;
}

