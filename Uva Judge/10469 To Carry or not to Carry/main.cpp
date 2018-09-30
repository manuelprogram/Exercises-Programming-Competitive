/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 20 de diciembre de 2016, 11:46 AM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    
    int a, b;
    while (scanf("%d %d",&a,&b)!=EOF) {
        printf("%d\n", a^b);
    }
    return 0;
}

