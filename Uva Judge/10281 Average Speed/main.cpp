/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 31 de enero de 2017, 03:24 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
    freopen("in.txt", "r", stdin);
 * 
 */
int main(int argc, char** argv) {
    char cad[1024];
    int change, hora, min, seg;
    float distancia = 0, x, speed = 0, tempSp;
    int ini = 0;
    int finall = 0;
    while (gets(cad)) {
        tempSp = speed;
        change = sscanf(cad, "%d:%d:%d %f", &hora, &min, &seg, &speed);
        if (change == 4) {
            finall = ini;
            ini = 0;
            ini = ini + hora * 3600;
            ini = ini + min * 60;
            ini = ini + seg;
            x = (float) (ini - finall) * 1.0 / 3600;
            distancia += (tempSp * x);
            finall = 0;
        } else {
            finall += hora * 3600;
            finall += min * 60;
            finall += seg;
            x = (float) (finall - ini) * 1.0 / 3600;
            distancia += (speed * x);
            ini = finall;
            finall = 0;
            printf("%s %.2f km\n", cad, distancia);
        }
    }
    return 0;
}

