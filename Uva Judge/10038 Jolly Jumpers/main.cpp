/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 29 de diciembre de 2016, 11:21 AM
 */

#include <cstdlib>
#include <stdio.h>
#include <cmath>
#include <string.h>

using namespace std;

/*
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 * 
 */
int main(int argc, char** argv) {
    int cas, current, next, dato[3009], ori, good;
    while (scanf("%d", &cas) != EOF) {
        memset(dato, 0, sizeof (dato));
        ori = cas;
        good = 1;
        scanf("%d", &current);
        while (--cas) {
            scanf("%d", &next);
            dato[abs(current - next)]++;
            current = next;
        }

        while(--ori) {
            if (dato[ori] != 1) {
                good = 0;
                break;
            }
        }
        printf(good ? "Jolly\n" : "Not jolly\n");
    }
    return 0;
}

