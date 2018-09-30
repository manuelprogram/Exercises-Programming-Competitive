/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 30 de enero de 2017, 10:28 AM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int cas;
    char num[200];
    scanf("%d", &cas);
    while (cas--) {
        scanf("%s", &num);
        if (!strcmp(num, "1") || !strcmp(num, "4") || !strcmp(num, "78")) {
            printf("+\n");
        } else if (num[strlen(num) - 2] == '3' && num[strlen(num) - 1] == '5') {
            printf("-\n");
        } else if (num[0] == '9' && num[strlen(num) - 1] == '4') {
            printf("*\n");
        } else {
            printf("?\n");
        }
    }
    return 0;
}

