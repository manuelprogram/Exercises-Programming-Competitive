/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 28 de diciembre de 2016, 09:03 PM
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int cas, sub, res,sqr,ani,eco;
    scanf("%d", &cas);
    while (cas--) {
        res = 0;
        scanf("%d", &sub);
        while (sub--) {
            scanf("%d %d %d",&sqr,&ani,&eco);
            res+=sqr*eco;
        }
        printf("%d\n",res);
    }
    return 0;
}

