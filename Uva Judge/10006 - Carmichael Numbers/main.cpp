/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 30 de enero de 2017, 10:57 AM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    
    int n;
    int RangoMax = 65000;
    bool Carmichael[RangoMax];
    bool Vec[RangoMax];
    for (int i = 3; i < RangoMax; i += 2) {
        Carmichael[i] = true;
    }
    for (int i = 3; i < RangoMax; i += 2) {
        if (Vec[i] == false) {
            Carmichael[i] = false;
            for (int j = 3 * i; j < RangoMax; j += 2 * i) {
                Vec[j] = true;
                if (((j / i) % i == 0) || ((j - 1) % (i - 1) != 0)) {
                    Carmichael[j] = false;
                }
            }
        }
    }
    scanf("%d", &n);
    while (n != 0) {
        if (Carmichael[n] == true) {
            printf("The number %d is a Carmichael number.\n", n);
        } else {
            printf("%d is normal.\n", n);
        }
        scanf("%d", &n);
    }
    return 0;
}

