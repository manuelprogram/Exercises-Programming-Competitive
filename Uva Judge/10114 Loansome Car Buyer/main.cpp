/* 
 * File:   main.cpp
 * Author: PERSONAL
 * FAJARDO
 * Created on 29 de diciembre de 2016, 03:12 PM
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>

using namespace std;

/*
 * 
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 */
int main(int argc, char** argv) {
    double creditime, downc, credit, owe;
    float por, interest[150];
    int month, deval;
    while (true) {
        scanf("%lf %lf %lf %d", &creditime, &downc, &credit, &deval);
        if (!(creditime < 0)) {
            owe = credit;
            double mp = credit / creditime;
            credit += downc;
            for (int i = 0; i <= creditime; i++) {
                interest[i] = -1;
            }
            for (int i = 0; i < deval; i++) {
                cin >> month>>por;
                interest[month] = por;
            }
            for (int i = 1; i <= creditime; i++) {
                if (interest[i] == -1) interest[i] = interest[i - 1];
            }
            int ans = -1;
            int i = 0;
            while (ans == -1) {
                credit = credit - (credit * interest[i]);
                if (credit > owe) {
                    ans = i;
                }
                owe -= mp;
                i++;
            }

            if (ans != 1) {
                printf("%d months\n", ans);
            } else {
                printf("%d month\n", ans);
            }
        } else {
            break;
        }
    }
    return 0;
}

