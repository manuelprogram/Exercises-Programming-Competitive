/* 
 * File:   E.cpp
 * Author: PERSONAL
 *
 * Created on 29 de abril de 2017, 01:52 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    int t, n, k, i, b,ban;
    scanf("%d", &t);
    while (t--) {
        ban = 0;
        i = 0;
        scanf("%d %d", &n, &k);
        while (n--) {
            scanf("%d", &b);
            if (k % b == 0) ban = 1;
            i++;
        }
        printf(ban ? "Yes.\n" : "No.\n");
    }
    return 0;
}

