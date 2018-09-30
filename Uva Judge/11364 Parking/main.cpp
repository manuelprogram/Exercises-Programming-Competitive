/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 5 de enero de 2017, 02:29 PM
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int cas, sub, max, min, data;
    scanf("%d", &cas);
    while (cas--) {
        max = 0;
        min = 999;
        scanf("%d", &sub);
        while (sub--) {
            scanf("%d", &data);
            if (data > max)max = data;
            if (data < min)min = data;
        }
        printf("%d\n",((max-min)<<1));
    }

    return 0;
}

