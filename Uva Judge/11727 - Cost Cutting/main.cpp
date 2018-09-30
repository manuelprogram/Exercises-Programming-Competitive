/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 5 de enero de 2017, 05:42 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int ar[3], cas, i = 1;
    scanf("%d", &cas);
    while (cas--) {
        scanf("%d %d %d", &ar[0], &ar[1], &ar[2]);
        sort(ar, ar + 3);
        printf("Case %d: %d\n", i, ar[1]);
        i++;
    }
    return 0;
}

