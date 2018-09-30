/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 29 de diciembre de 2016, 09:10 AM
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int cas, sub, m, j, i = 1, data;
    scanf("%d", &cas);
    while (cas--) {
        printf("Case %d: ", i);
        m = j = 0;
        scanf("%d", &sub);
        while (sub--) {
            scanf("%d", &data);
            m+=(data+30)/30;
            j+=(data+60)/60;
        }
        m*=10;
        j*=15;
        if(m<j) printf("Mile %d\n",m);
        else if(m>j)printf("Juice %d\n",j);
        else printf("Mile Juice %d\n",m);
        i++;
    }
    return 0;
}

