#include <bits/stdc++.h>

using namespace std;

const double raiz = sqrt(3);

double area_t(double lado) {
    return ( (lado * lado) * raiz) / 4;
}

int main(int argc, char** argv) {
    int cas, sub, a, b0, b1, b2, base, altura;
    double area;
    char c;
    scanf("%d", &cas);
    while (cas--) {
        altura = base = b0 = b2 = b1 = 0;
        area = 0;
        scanf("%d", &sub);
        getchar();
        while (sub--) {
            scanf("%c %d", &c, &a);
            getchar();
            switch (c) {
                case 'C':
                    if (!b0) {
                        b0 = 1;
                    } else if (b0&&!b1) {
                        b1 = 1;
                        base += a;
                    } else if (b1&&!b2) {
                        b2 = 1;
                        altura += a;
                    }

                    area += (a * a);
                    break;
                case 'T':
                    area += area_t((double) a);
                    break;
                case 'S':
                    area += (a * a);
                    break;

            }
            if (b0&&!b1) {
                base += a;
            } else if (b1&&!b2) {
                altura += a;
            }
        }
        printf("%.4f\n", (base*altura) - area);
    }
    return 0;
}

