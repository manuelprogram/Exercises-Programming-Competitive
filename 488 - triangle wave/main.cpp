/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 20 de diciembre de 2016, 10:19 AM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//        freopen("in.txt", "r", stdin);
//        freopen("out.txt", "w", stdout);

    int cas, amp, frec, i, j;
    bool reverse;
    scanf("%d", &cas);
    while (cas--) {
    scanf("%d %d",&amp, &frec);
        while (frec--) {
            i = 1;
            reverse=0;
            do {
                for (j = 0; j < i; j++) {
                    printf("%d", i);
                }
                printf("\n");
                if ((i < amp)&&!reverse)
                    i++;
                else {
                    reverse = 1;
                    i--;
                }
            } while (i != 0);
            if(cas||frec) printf("\n");
        }
    }
    return 0;
}

