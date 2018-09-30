#include<bits/stdc++.h>

using namespace std;

int num[32];

bool si(){
    for (int j = 0; j < 32; j++) {
        if (!num[j]) {
            return 0;
        }
    }
    return 1;
}

int main(){
        int casos;
        unsigned long int long n, k = 31, n2;
        scanf("%d", &casos);

        for (int i = 0; i < casos; i++) {
            scanf("%llu", &n);
            //printf("numero leido %llu\n", n);
            memset(num, 0, sizeof(num));
            n2 = n >>   27;
            //printf("primeros 5 bits %ld\n", n2);
            n = (n << 5) | n2;
            while (n > 0) {
                //printf("evaluamos: %d\n", (n & k));
                num[n & k]++;
                n = n >> 1;
            }

            (si())? printf("yes\n") : printf("no\n");
        }

    return 0;
}

