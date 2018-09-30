/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 7 de enero de 2017, 04:44 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */

bool biciesto(int a) {
    if (a % 4 == 0 && a % 100 != 0) {
        return true;
    } else {
        return a % 4 == 0 && a % 400 == 0;
    }
}

static int dias(int mes, int a) {
    if (mes == 1 || mes == 5 || mes == 3 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return 31;
    } else {
        if (mes == 2) {
            if (biciesto(a) == true) {
                return 29;
            } else {
                return 28;
            }
        } else {
            return 30;
        }
    }
}

int main(int argc, char** argv) {
    int can, dia, mes, a;
    while (scanf("%d %d %d %d", &can, &dia, &mes, &a) && can && dia) {
        dia = dia + can;
        while (dia > dias(mes, a)) {
            dia = dia - dias(mes, a);
            mes++;
            if (mes == 13) {
                a++;
                mes = 1;
            }
        }
        printf("%d %d %d\n",dia,mes,a);
    }
    return 0;
}

