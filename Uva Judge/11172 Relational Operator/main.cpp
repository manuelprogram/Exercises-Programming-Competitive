/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 5 de enero de 2017, 05:15 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int caso, num1, num2;
    scanf("%d", &caso);
    while (caso--) {
        scanf("%d %d", &num1, &num2);
        printf(num1>num2?">":num1<num2?"<":"=");
        printf("\n");
    }

    return 0;
}

