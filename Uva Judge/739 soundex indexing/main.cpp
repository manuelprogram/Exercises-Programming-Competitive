/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 8 de enero de 2017, 11:28 AM
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    int codigo[91];
    codigo['B'] = codigo['P'] = codigo['F'] = codigo['V'] = 1;
    codigo['C'] = codigo['S'] = codigo['K'] = codigo['G'] =codigo['J'] = codigo['Q'] = codigo['X'] = codigo['Z'] = 2;
    codigo['D'] = codigo['T'] = 3;
    codigo['L'] = 4;
    codigo['M'] = codigo['N'] = 5;
    codigo['R'] = 6;
    string nosecodifica = "AEIOUYWH";
    printf("         NAME                     SOUNDEX CODE\n");
    char nombre[1000];
    while (scanf("%s", &nombre) != EOF) {
        stringstream soundex;
        soundex << nombre[0];
        int k = 0;
        for (int i = 1; i < strlen(nombre); ++i) {
            if (nosecodifica.find(nombre[i]) != -1) continue;
            if (codigo[nombre[i]] == codigo[nombre[i - 1]]) continue;
            soundex << codigo[nombre[i]];
            ++k;
            if (k == 3) break;
        }
        for (int i = soundex.str().length(); i < 4; ++i)
            soundex << 0;
        
        printf("         %s", nombre);
        for (int i = 0; i < (35 - 9 - strlen(nombre) - 1); ++i) 
        printf(" ");
        printf("%s\n", soundex.str().c_str());
    }
    printf("                   END OF OUTPUT\n");
    return 0;
}