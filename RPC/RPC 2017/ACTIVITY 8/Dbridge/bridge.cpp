/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:    bridge.cpp
 * Author: manue
 *
 * Created on 6 de agosto de 2017, 07:08 PM
 */

#include <bits/stdc++.h>

using namespace std;

typedef long int ll;

/*
 * 
 */

ll eco(ll esp) {
    return (esp < 120) ? esp : 120;
}

int main(int argc, char** argv) {
    ll n, tiempo = 0, actual = 0, espera = 1740, in, aux;
    scanf("%ld", &n);
    n--;
    scanf("%ld", &in);
    actual = in + espera;
    tiempo = 60 + 20;
    actual += tiempo;
    //    printf("actual:%ld tiempo=%ld \n", actual, tiempo);
    while (n--) {
        scanf("%ld", &in);
        if (in <= actual) {
            tiempo += 20;
            actual += 20;
        } else {
            aux = eco(in - actual);
            tiempo += aux;
            tiempo += 20;
            if (aux == 120 && (in - actual) != 120) {
                actual = in + 1820;
            } else {
                actual += aux;
            }
        }
        //        printf("actual:%ld tiempo=%ld \n", actual, tiempo);
    }
    printf("%ld\n", tiempo + 60);
    return 0;
}

