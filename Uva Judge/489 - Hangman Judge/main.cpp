/* 
 * File:   main.cpp
 * Author: PERSONAL
 *ERROR EN EL UDEBUG
 * 
 * Created on 26 de diciembre de 2016, 08:45 PM
 */

#include <bits/stdc++.h>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //    freopen("in.txt", "r", stdin);
    //    freopen("out.txt", "w", stdout);

    int num, i, per;
    char com[1001];
    while (scanf("%d", &num) && num>-1) {
        scanf("%s", &com); //	0.040 con prinf
        string cad(com);
        scanf("%s", &com);
        i = 0;
        per = 0;
        while (com[i] && cad != "" && per != 7) {
            if (cad.find(com[i]) == -1) {
                per++;
            } else {
                cad.erase(remove(cad.begin(), cad.end(), com[i]), cad.end()); // elimina el caracter que le pase
            }
            i++;
        }
        printf("Round %d\n", num);
        if (per == 7) {
            printf("You lose.\n");
        } else if (cad == "") {
            printf("You win.\n");
        } else {
            printf("You chickened out.\n");
        }
    }
    return 0;
}