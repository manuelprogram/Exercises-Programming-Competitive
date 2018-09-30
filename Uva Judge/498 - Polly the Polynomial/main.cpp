/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 1 de febrero de 2017, 11:13 AM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    freopen("in.txt", "r", stdin);

    char cad[1024];
    stringstream x;
    vector<long long> v;
    int len;
    long long coef, bas, acum;
    bool print = 0;
    while (gets(cad)) {
        x.str(cad);
        while (x >> coef) {
            v.push_back(coef);
        }
        x.clear();
        len = v.size();
        gets(cad);
        x.str(cad);
        print = 0;
        while (x >> bas) {
            acum = v[0];
            printf("%lld* ", v[0]);
            for (int i = 1; i < len; i++) {
                acum *= bas;
                acum += v[i];
            }
            if (print) {
                printf(" ");
            } else {
                print = 1;
            }
            printf("%lld", acum);
        }
        printf("\n");
        x.clear();
        v.clear();
    }
    return 0;
}

