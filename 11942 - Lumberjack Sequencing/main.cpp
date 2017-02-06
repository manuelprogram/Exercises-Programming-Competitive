/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 28 de diciembre de 2016, 09:19 PM
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 */
int main(int argc, char** argv) {
    int current, next, cas, low, high, i;
    scanf("%d", &cas);
    printf("Lumberjacks:\n");
    while (cas--) {
        i = 9;
        high = low = 0;
        scanf("%d", &current);
        while (i--) {
            scanf("%d",&next);
            if (current > next) 
                high = 1;
            else 
                low = 1;
            
            current=next;
        }
        printf((high && low) ? "Unordered\n" : "Ordered\n");
    }
    return 0;
}

