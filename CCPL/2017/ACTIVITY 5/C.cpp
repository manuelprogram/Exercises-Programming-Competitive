/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 6 de mayo de 2017, 01:42 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    string cad;
    int cn, len;
    while (cin >> cad) {
        cn = 0;
        int len = cad.length();
        for (int j = 0; j < 26; j++) {
            if (cad.find('i') == -1) {
                cn++;
            }
            for (int i = 0; i < len; i++) {
                if (cad[i] == 'z') {
                    cad[i] = 'a';
                } else {
                    cad[i] = cad[i] + 1;
                }
            }
        }
        if (!cn) {
            printf("impossible\n");
        } else {
            printf("%d\n", cn);
        }
    }
    return 0;
}

