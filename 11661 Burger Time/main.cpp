/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 5 de enero de 2017, 06:04 PM
 */

#include <bits/stdc++.h>

using namespace std;

bool d, r;
char cad[2000009];
int cas;

int num() {
    int cola = 0, cn = 1, peq = 2000001;
    r = 0;
    d = 0;
    string aux(cad);
    if (aux.find('Z') != -1) {
        return 0;
    } else {

        for (int i = 0; i < cas; i++) {
            //..R...D.R..D..
            switch (cad[i]) {
                case 'D':
                    if (!d) {
                        d = 1;
                        if (r) {
                            cola = 1;
                        }
                    } else {
                        cn = 1;
                    }
                    break;
                case 'R':
                    if (!r) {
                        r = 1;
                        if (d) {
                            cola = 2;
                        }
                    } else {
                        cn = 1;
                    }
                    break;
                case 'Z':
                    return 0;
                default:
                    if (d || r)cn++;
                    break;
            }
            if (r && d) {
                if (cola == 1) {
                    r = 0;
                } else {
                    d = 0;
                }
                if (cn == 1) {
                    return 1;
                } else if (cn < peq) {
                    peq = cn;
                }
                cn = 1;
            }
        }
        return peq;
    }
}

int main(int argc, char** argv) {
    while (scanf("%d", &cas) && cas) {
        scanf("%s", &cad);
        printf("%d\n", num());
    }
    return 0;
}

