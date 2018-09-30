/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 23 de diciembre de 2016, 09:41 PM
 */

#include <cstdlib>
#include <stdio.h>
#include <string.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    int num, min, max;
    char cad1[24];
    char cad2[24];
    while (scanf("%d", &num) && num) {
        min = 0;
        max = 11;
        scanf("%s %s", &cad1, &cad2);
        if (!strcmp(cad2, "on")) {
            printf("Stan may be honest\n");
        } else {
            if (!strcmp(cad2, "low")) {
                min = num;
            } else {
                max = num;
            }
            while (scanf("%d %s %s", &num, &cad1, &cad2) && strcmp(cad2, "on")) {
                if (!strcmp(cad2, "low") && num > min) {
                    min = num;
                } else if (!strcmp(cad2, "high") && num < max) {
                    max = num;
                }
            }
            if (num > min && num < max) {
                printf("Stan may be honest\n");
            } else {
                printf("Stan is dishonest\n");
            }
        }
    }
    return 0;
}

