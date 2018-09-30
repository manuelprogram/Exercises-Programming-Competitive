/* 
 * File:   main.cpp
 * Author: PERSONAL
 * 
 * en este invertimos un numero 
 * y de forma recursiva sabemos si es primo
 * 
 * Created on 21 de diciembre de 2016, 11:00 AM
 */

#include <bits/stdc++.h>


/*
 * 
using namespace std;
#define max_int  2147483647
 */

int a, rev;

bool primo(int num, int div) {//como divisor recibimos la raiz cuadrada del numero
    return ((div == 1) ? 1 : (num % div == 0) ? 0 : primo(num, div - 1));
}

void reverse(int n) {
    rev = 0;
    while (n) {
        rev = (rev << 1) + (rev << 3) + (n % 10); //multiplicacion por 10
        n /= 10;
    }
}

int main(int argc, char** argv) {
    while (scanf("%d", &a) != EOF) {
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
        if (primo(a, sqrt(a))) {
            reverse(a);
            if (primo(rev, sqrt(rev)) && rev != a) {
                printf("%ld is emirp.\n", a);
            } else {
                printf("%ld is prime.\n", a);
            }
        } else {
            printf("%ld is not prime.\n", a);
        }
    }
    return 0;
}








//    string o = "hola";
//    string num = to_string(10);
//    int n=atoi("17");
//    printf("kk %x\n",n);
//    printf("->> %s\n", num.c_str());
//    reverse(o.begin(), o.end());
//    reverse(num.begin(), num.end());
//    printf("%,,,s\n", o.c_str());

//   string to_string(long Val) { // convert long to string
//    char cad[10000];
//    sprintf(cad, "%ld", Val);
//    return string(cad);
//}