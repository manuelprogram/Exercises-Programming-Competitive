/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 21 de diciembre de 2016, 06:08 PM
 */

#include <cstdlib>
#include <stdio.h>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    char cad[100];
    while (gets(cad) && cad[0] != '-') {
        if (cad[1] == 'x') {
            printf("%d\n", strtol(cad, NULL, 16)); //strtol es para pasar de cualquier base en string a decimil
        } else {
            printf("0x%X\n", strtol(cad, NULL, 10)); //strtol es para pasar de cualquier base en string a decimil
        }
    }
    return 0;
}

