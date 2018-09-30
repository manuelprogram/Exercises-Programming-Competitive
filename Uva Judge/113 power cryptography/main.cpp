/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 30 de diciembre de 2016, 09:29 AM
 */

#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double n, p;
    while (scanf("%lf %lf", &n, &p) != EOF) {
        printf("%.0lf\n", pow(p, (1 / n)));
    }
    return 0;
}

