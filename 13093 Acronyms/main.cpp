/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 15 de diciembre de 2016, 05:24 PM
 */

#include <bits/stdc++.h>
using namespace std;
#define INT_MAX 2147483647
#define INT_MIN -2147483648

int main() {
    char line[1024];
    while (gets(line)) {
        stringstream sin1(line); //inicializo en cadena leiga
        string b1, b2, x;
        while (sin1 >> x) {//retorna cadenas separadas de los espacios
            b1 += x[0];
        }
        gets(line);
        stringstream sin2(line);
        while (sin2 >> x){//retorna cadenas despues de los espacios
            b2 += x[0];
        }
        puts(b1 == b2 ? "yes" : "no");
    }
    return 0;
}
