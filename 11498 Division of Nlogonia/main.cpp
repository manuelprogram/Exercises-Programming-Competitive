/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 27 de diciembre de 2016, 01:52 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 */
int main(int argc, char** argv) {
    int cas, x1, y1, x, y;
    while (scanf("%d", &cas) && cas) {
        scanf("%d %d", &x1, &y1);
        while (cas--) {
            scanf("%d %d", &x, &y);
            if(x1==x || y1==y) printf("divisa\n");
            else if(x>x1 && y>y1) printf("NE\n");
            else if(x<x1 && y>y1) printf("NO\n");
            else if(x>x1 && y<y1) printf("SE\n");
            else printf("SO\n");
        }
    }
    return 0;
}

