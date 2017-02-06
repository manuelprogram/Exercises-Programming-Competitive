/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 30 de diciembre de 2016, 11:51 AM
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int a;
    while (scanf("%d",&a)&&a) {
        if(a>=101){
            printf("f91(%d) = %d\n",a,a-10);
        }else{
            printf("f91(%d) = 91\n",a);
        }
    }
    return 0;
}

