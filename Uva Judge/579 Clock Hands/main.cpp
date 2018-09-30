/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 29 de diciembre de 2016, 10:01 AM
 */

#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double h, min,res;
    while (scanf("%lf:%lf", &h, &min) && (h || min)) {
        h = 30*(h + (min / 60));
        min *= 6;
        res=abs(h - min);
        printf("%.3lf\n", res > 180 ? 360 - res : res);
    }
    return 0;
}

