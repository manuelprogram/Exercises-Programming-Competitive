/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 9 de abril de 2017, 11:29 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
#define f pair<int,int>

struct medi {
    int orig;
    int fre;
    int pos;
} ar[3500];

bool cmp(medi a, medi b) {
    if (a.fre == b.fre) {
        return (a.pos < b.pos);
    } else {
        return a.fre < b.fre;
    }
}

int main(int argc, char** argv) {
    int cas, med, fre;
    scanf("%d", &cas);
    char past[3300][500];
    while (cas--) {
        scanf("%d %d", &med, &fre);
        for (int i = 0; i < med; i++) {
            scanf("%s %d", &past[i], &ar[i].fre);
            ar[i].orig = ar[i].fre;
            ar[i].pos = i;
        }
        sort(ar, ar + med, cmp);
        for (int j = 0; j < fre; j++) {
            printf("%d %s\n", ar[0].fre, past[ar[0].pos]);
            ar[0].fre += ar[0].orig;
            if (ar[0].fre >= ar[1].fre) {
                sort(ar, ar + med, cmp);
            }
        }
    }
    return 0;
}

