/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 6 de enero de 2017, 06:59 PM
 */

#include <bits/stdc++.h>

using namespace std;

int n, dinero, num, pos, cn = 0;
string ar[15], name;
int plata[15];

int BuscaPos() {
    for (int i = 0; i < n; i++) {
        if (ar[i] == name) {
            return i;
        }
    }
    return -1;
}

int main(int argc, char** argv) {
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++) {
            cin>>name;
            scanf("%d %d", &dinero, &num);
            pos = BuscaPos();
            if (num != 0) {
                int sob = dinero % num;
                int regalar = dinero / num;
                plata[pos] += sob - dinero;
                for (int j = 0; j < num; j++) {
                    cin>>name;
                    pos = BuscaPos();
                    plata[pos] += regalar;
                }
            }
        }
        if (cn > 0) {
            printf("\n");
        }
        for (int i = 0; i < n; i++) {
            printf("%s %d\n", (ar[i]).c_str(), plata[i]);
        }
        memset(plata,0,sizeof(plata));
        cn++;
    }
    return 0;
}

