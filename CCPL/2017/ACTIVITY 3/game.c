/* 
 * File:   main.c
 * Author: PERSONAL
 *
 * Created on 8 de abril de 2017, 05:17 PM
 */

#include<stdio.h>
#define bool short
#define true 1
#define false 0

char tab[5][5];
int mf1[] = {-1, -1, 0, 1};
int mc1[] = {0, 1, 1, 1};
int mf2[] = {1, 1, 0, -1};
int mc2[] = {0, -1, -1, -1};

void contar() {
    bool a = false, b = false;
    char x;
    int i, j, k, q1, w1, q2, w2;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            x = tab[i][j];
            if ((x == 'A' && a) || (x == 'B' && b)) continue;

            for (k = 0; k < 4; k++) {
                q1 = i + mf1[k];
                w1 = j + mc1[k];
                q2 = i + mf2[k];
                w2 = j + mc2[k];
                if (q1 < 0 || q2 < 0 || q1 == 5 || q2 == 5) {
                    continue;
                }
                if (w1 < 0 || w2 < 0 || w1 == 5 || w2 == 5) {
                    continue;
                }

                if (x == tab[q1][w1]) {
                    if (x == tab[q2][w2]) {
                        if (x == 'A') {
                            a = true;
                            k = 4;
                        } else {
                            b = true;
                            k = 4;
                        }
                        if (a == 1 && b == 1) {
                            printf("draw\n");
                            return;
                        }
                    }
                }
            }
        }
    }

    if (a) {
        printf("A wins\n");
        return;
    }
    if (b) {
        printf("B wins\n");
        return;
    }
    printf("draw\n");
}

int main(int argc, char** argv) {
    int casos, i2, j2;
    scanf("%d", &casos);
    for (i2 = 0; i2 < casos; i2++) {
        for (j2 = 0; j2 < 5; j2++) {
            scanf("%s", &tab[j2]);
        }
        contar();
    }
    return 0;
}



