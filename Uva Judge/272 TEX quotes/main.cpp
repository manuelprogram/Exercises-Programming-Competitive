/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 19 de diciembre de 2016, 11:26 AM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//    freopen("in1.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    
    char cad[1024];
    bool ban = true;
    while (scanf(" %[^\n]", &cad) != EOF) {
        int i = 0;
        while (cad[i]) {
            if (cad[i] == '"') {
                printf(ban ? "``" : "''");
                ban = !ban;
            }else{
                printf("%c",cad[i]);
            }
            i++;
        }
        printf("\n");
    }
    return 0;
}

