/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 27 de mayo de 2017, 01:36 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
unsigned long long int lcm(unsigned long long int a,unsigned long long int b) {
    unsigned long long int tem = __gcd(a, b);
    return tem ? (a / tem * b) : 0;
}
int ar[1000000] = {0};

void cal() {
    for (int i = 0; i < 100; i++) {
        ar[i] = i + 1;
        int resul = accumulate(ar, ar + i+1, 1, lcm);
        printf("%d %d\n",i+1,resul);
    }
}

int main(int argc, char** argv) {
    //freopen("out.txt", "w", stdout);
    cal();
    return 0;
}

