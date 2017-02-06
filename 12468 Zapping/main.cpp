/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 22 de diciembre de 2016, 10:01 AM
 */

#include <cstdlib>
#include <stdio.h>
#include <algorithm>

using namespace std;

/*
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 * 
 */
int main(int argc, char** argv) {
    
    int a, b, v1, v2;
    while (scanf("%d %d", &a, &b) && a>-1 && b>-1) {
        if (a > b)swap(a, b);
        v1 = (a + 100 - b);
        v2 = (b - a);
        printf("%d\n", (v1 > v2 ? v2 : v1));
    }
    return 0;
}

