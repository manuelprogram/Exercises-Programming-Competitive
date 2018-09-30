/* 
 * File:   main.c
 * Author: PERSONAL
 *
 * Created on 14 de diciembre de 2016, 05:12 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    char cad[80];
    int cn, acum, len;
    scanf("%d", &n);
    while (n--) {
        cn = 0;
        acum = 0;
        scanf("%s", cad);
        len = strlen(cad);
        int i;
        for (i = 0; i < len; i++) {
            if (cad[i] == 'O') {
                cn++;
                acum += cn;
            } else {
                cn = 0;
            }
        }
        printf("%d\n", acum);
    }
   return 0;
}

