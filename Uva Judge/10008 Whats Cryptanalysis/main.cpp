/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 22 de diciembre de 2016, 05:44 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
struct node {
    char car;
    int cn;
} nodo[26];

bool cmp(node a, node b) {

    if (a.cn < b.cn)
        return 0;
    else if (a.cn > b.cn)
        return 1;
    else
        return (a.car < b.car);

}

int main() {
    int cas, i;
    for (i = 'A'; i <= 'Z'; i++) {
        nodo[i].car = i;
    }
    char cad[256];
    while (gets(cad)) {
       for(i = 0; cad[i]; ++i){
            if( cad[i] >= 'a' && cad[i] <= 'z')
                cad[i] = cad[i] - 32;
        }
//       strupr(cad);// gets() no lo reconoce uva 
        i = 0;
        while (cad[i]) {
            if (cad[i] >= 'A' && cad[i] <= 'Z') {
                nodo[cad[i]].cn++;
            }
            i++;
        }
    }
    sort(nodo + 'A', nodo + 'Z', cmp);
    for (i = 'A'; i <= 'Z' && nodo[i].cn; i++) {
        printf("%c %d\n", nodo[i].car, nodo[i].cn);
    }
    return 0;
}

