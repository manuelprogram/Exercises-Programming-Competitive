#include <bits/stdc++.h>

using namespace std;

int j;

struct medi {
    int fre;
    int pos;
} ar[3500];

bool cmp(medi a, medi b) {
    if ((j % a.fre == 0) && (j % b.fre == 0)) {
        return (a.pos < b.pos);
    } else {
        return a.fre < b.fre;
    }
}

int algoritmo_euclides(int a, int b) {
    if (a % b == 0) {
        return b;
    } else {
        return algoritmo_euclides(b, a % b);
    }
}

int main(int argc, char** argv) {
    int cas, med, fre, pasos;
    scanf("%d", &cas);
    char past[3003][600];
    while (cas--) {
        scanf("%d %d", &med, &fre);

        scanf("%s %d", &past[0], &ar[0].fre);
        ar[0].pos = 0;
        pasos = ar[0].fre;

        for (int i = 1; i < med; i++) {
            scanf("%s %d", &past[i], &ar[i].fre);
            ar[i].pos = i;
            pasos = algoritmo_euclides(pasos, ar[i].fre);
        }
        j = pasos;

        while(true) {
            if(!fre) break;

            for(int k = 0; k < med; k++){
                if(!fre) break;
                if(j % ar[k].fre == 0){
                     fre--;
                     printf("%d %s\n", j, past[ar[k].pos]);
                }
            }
            j = j + pasos;
        }
    }
    return 0;
}
