/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 29 de diciembre de 2016, 08:08 PM
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 * 
 */
static unsigned long long int a, b;

void carry() {
    int sum = 0, cn = 0;
    while (a) {
        sum = (a % 10)+(b % 10) + sum;
        if (sum > 9) {
            cn++;
            sum /= 10;
        } else {
            sum = 0;
        }
        a /= 10;
        b /= 10;
    }
    if (!cn) {
        printf("No carry operation.\n");
    } else if (cn == 1) {
        printf("%d carry operation.\n", cn);
    } else {
        printf("%d carry operations.\n", cn);
    }
}

int main(int argc, char** argv) {

    while (scanf("%lld %lld", &a, &b)&&(a || b)) {
        if (a < b) {
            int aux;
            aux = b;
            b = a;
            a = aux;
        }
        carry();
    }
    return 0;
}

