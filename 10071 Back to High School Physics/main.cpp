/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 19 de diciembre de 2016, 10:05 AM
 */

#include <stdio.h>

//using namespace std; asi no se puede comentariar en ANSI C

/*
 * 
 */
int main(int argc, char** argv) {
    int v, t;
    while (scanf("%d %d", &v, &t)!=EOF) {
        printf("%d\n", v * (t << 1));
    }
    return 0;
}

