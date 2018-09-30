/*
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 15 de diciembre de 2016, 02:15 PM
 */

#include <bits/stdc++.h>
//#include <stdio.h>
//#include <sstream>
using namespace std;

string total;
char num[1000000];
void pos() {
    int i=0;
        while (num[i]) {
            switch (num[i]) {
                case '5':
                    num[i] = '2';
                    break;
                case '2':
                    num[i] = '5';
                    break;
                case '6':
                    num[i] = '9';
                    break;
                case '9':
                    num[i] = '6';
                    break;
            }
            i++;
        }
    /* MANEJO DE CADENAS 
    string c="m";
    string s="si";
    c+='p';
    char n[11]={0};
    sprintf(n,"%d",10);
    sprintf(n,"%d",11);
    c+=n;
    c="";
    printf("%s\n",c.c_str());*/
//    replace(num.begin(), num.end(), '5', 'd'); //reemprazar caracteres
//    replace(num.begin(), num.end(), '6', 'n'); //reemprazar caracteres
//    replace(num.begin(), num.end(), '9', '6'); //reemprazar caracteres
//    replace(num.begin(), num.end(), '2', '5'); //reemprazar caracteres
//
//    replace(num.begin(), num.end(), 'd', '2'); //reemprazar caracteres
//    replace(num.begin(), num.end(), 'n', '9'); //reemprazar caracteres

    total+=num;
}

int main() {
    string aux;
    char in[100009];
    int i;
    while (scanf("%s", &in) != EOF) {
        total="";
        aux=""; //limpio el contenedor
        i = 0;
        while (in[i]) {
            if (aux.find(in[i]) == -1) {//buscar un caracter
                aux+= in[i];
            }
            sprintf(num,"%d",aux.find(in[i])+ 1);//paso de int a cadena de 
            
            pos();
            i++;
        }
        printf("%s\n", total.c_str());
    }
    return 0;
}

