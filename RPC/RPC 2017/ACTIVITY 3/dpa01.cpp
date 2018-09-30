#include<bits/stdc++.h>

using namespace std;

int suma_div(int n) {
    int con = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            con += i;
        }
    }
    return con;
}

int main() {
    int casos,n;
    scanf("%d", &casos);
    for (int i = 0; i < casos; i++) {
        scanf("%d", &n);
        int m = suma_div(n);
        if (m > n) {
            printf("abundant");
        } else {
            if (n == m) {
                printf("perfect");
            } else {
                printf("deficient");
            }
        }
        printf("\n");
    }
    return 0;
}

