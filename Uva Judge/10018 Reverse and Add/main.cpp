/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
using namespace std;
 * Created on 22 de diciembre de 2016, 04:48 PM
#include <cstdlib>
 */

#include <stdio.h>


/*
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 * 
 */
unsigned int num,res;

unsigned int invertir(unsigned int n) {
    unsigned int aux = 0;
    while (n) {
        aux *= 10;
        aux += n % 10;
        n /= 10;
    }
    return aux;
}

int main(int argc, char** argv) {
    
    int cas, cn;
    scanf("%d", &cas);
    while (cas--) {
        scanf("%u", &num);
        cn = 0;
        do {
            cn++;
            res = num + invertir(num);
            num=res;
        } while (res != invertir(res));
        printf("%d %u\n", cn, res);
    }
    return 0;
}

