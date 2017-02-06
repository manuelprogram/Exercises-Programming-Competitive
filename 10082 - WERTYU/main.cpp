/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 29 de diciembre de 2016, 10:45 AM
 */

#include <bits/stdc++.h>

using namespace std;
static const char ori[64] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
static char cad[256];
void cargar(){
    int i=0;
    cad[' ']=' ';
    while (ori[i]) {
        cad[ori[i+1]]=ori[i];
        i++;
    }
}

int main(int argc, char** argv) {
    cargar();
    char in[10000],i;
    while (gets(in)) {
        i=0;
        while (in[i]) {
            printf("%c",cad[in[i]]);
        i++; 
        }
        printf("\n");
    }
    return 0;
}

