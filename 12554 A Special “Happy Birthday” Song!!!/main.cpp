/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 12 de enero de 2017, 06:05 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    char cad[109][200], song[16][100] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    int i = 0, cas, aux, cn;
    bool c = 0, p = 0;
    scanf("%d", &cas), aux = cas;
    p = (cas <= 16);
    
    while (aux--) {
        scanf("%s", cad[i]);
        i++;
    }
    cn = 0;
    i = 0;
    while (!p || !c) {
        printf("%s: %s\n", cad[i], song[cn]);
        cn++, i++;
        if (i == cas) {
            i = 0;
            p = 1;
        }
        if (cn == 16) {
            cn = 0;
            c = 1;
        } else {
            c = 0;
        }
    }
    return 0;
}

