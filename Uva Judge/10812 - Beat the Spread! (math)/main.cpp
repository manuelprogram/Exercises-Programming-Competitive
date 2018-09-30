/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 15 de diciembre de 2016, 08:10 PM
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int cas, n1, n2, a, b;
    scanf("%d", &cas);
    while (cas--) {
        scanf("%d %d", &n1, &n2);
        a = abs(n1 - n2) / 2;
        b = n1 - a;
        if ((a + b) == n1 && abs(b - a) == n2) {
            printf("%d %d\n", b, a);
        } else {
            printf("impossible\n");
        }
    }
    return 0;
}

