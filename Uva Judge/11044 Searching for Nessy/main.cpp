/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 29 de diciembre de 2016, 09:34 AM
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int cas, f, c;
    scanf("%d", &cas);
    while (cas--) {
        scanf("%d %d", &f, &c);
        printf("%d\n",(f/3)*(c/3));
    }
    return 0;
}

