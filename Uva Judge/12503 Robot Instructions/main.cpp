/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 26 de diciembre de 2016, 08:06 PM
 */

#include <bits/stdc++.h>

using namespace std;

#define clear(a) memset(a,0, sizeof(a))

/*
 * 
 */
int main(int argc, char** argv) {
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    
    int v[1001] = {0}, cas, ins, cn, pos;
    char cad[100];
    scanf("%d",&cas);
    while (cas--) {
        scanf("%d",&ins);
        cn = 0;
        for (int i = 0; i < ins; i++) {
            scanf("%s", &cad);
            if (cad[0] == 'L') {
                cn += v[i] = -1;
            } else if (cad[0] == 'R') {
                cn += v[i] = 1;

            } else {
                scanf("%*s %d", &pos);
                cn += v[i] = v[pos - 1];
            }
        }
        printf("%d\n",cn);
    }
    return 0;
}

