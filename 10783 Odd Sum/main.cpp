/* 
 * File:   main.cpp
 * Author: PERSONAL
using namespace std;
 *
#include <cstdlib>
 * Created on 29 de diciembre de 2016, 02:39 PM
 */

#include <stdio.h>


/*
 * 
 */
int main(int argc, char** argv) {
    int cas, i = 1, a, b, acum;
    scanf("%d", &cas);
    cas++;
    while (i != cas) {
        acum = 0;
        scanf("%d %d", &a, &b);
        while (a <= b) {
            if (a & 1)//impar
                acum += a;
            a++;
        }
        printf("Case %d: %d\n", i, acum);
        i++;
    }
    return 0;
}

