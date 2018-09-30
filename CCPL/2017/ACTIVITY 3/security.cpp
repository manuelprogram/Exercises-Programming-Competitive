/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 8 de abril de 2017, 02:27 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
static map<char, string> mapa;
static map<string, char> morse;

void cargar() {
    mapa['A'] = ".-";
    mapa['B'] = "-...";
    mapa['C'] = "-.-.";
    mapa['D'] = "-..";
    mapa['E'] = ".";
    mapa['F'] = "..-.";
    mapa['G'] = "--.";
    mapa['H'] = "....";
    mapa['I'] = "..";
    mapa['J'] = ".---";
    mapa['K'] = "-.-";
    mapa['L'] = ".-..";
    mapa['M'] = "--";
    mapa['N'] = "-.";
    mapa['O'] = "---";
    mapa['P'] = ".--.";
    mapa['Q'] = "--.-";
    mapa['R'] = ".-.";
    mapa['S'] = "...";
    mapa['T'] = "-";
    mapa['U'] = "..-";
    mapa['V'] = "...-";
    mapa['W'] = ".--";
    mapa['X'] = "-..-";
    mapa['Y'] = "-.--";
    mapa['Z'] = "--..";
    mapa['_'] = "..--";
    mapa[','] = ".-.-";
    mapa['.'] = "---.";
    mapa['?'] = "----";
    //-------------morse
    morse[".-"] = 'A';
    morse["-..."] = 'B';
    morse["-.-."] = 'C';
    morse["-.."] = 'D';
    morse["."] = 'E';
    morse["..-."] = 'F';
    morse["--."] = 'G';
    morse["...."] = 'H';
    morse[".."] = 'I';
    morse[".---"] = 'J';
    morse["-.-"] = 'K';
    morse[".-.."] = 'L';
    morse["--"] = 'M';
    morse["-."] = 'N';
    morse["---"] = 'O';
    morse[".--."] = 'P';
    morse["--.-"] = 'Q';
    morse[".-."] = 'R';
    morse["..."] = 'S';
    morse["-"] = 'T';
    morse["..-"] = 'U';
    morse["...-"] = 'V';
    morse[".--"] = 'W';
    morse["-..-"] = 'X';
    morse["-.--"] = 'Y';
    morse["--.."] = 'Z';
    morse["..--"] = '_';
    morse[".-.-"] = ',';
    morse["---."] = '.';
    morse["----"] = '?';
}

int main(int argc, char** argv) {
    cargar();
    char cad[1024];
    while (scanf("%s", &cad) != EOF) {
        stringstream num, aux;
        for (int i = 0; i < strlen(cad); i++) {
            num << mapa[cad[i]].length();
            aux << mapa[cad[i]];
        }
        string n(num.str()), rec(aux.str()), sub;
        reverse(n.begin(), n.end());
        int act = 0, has;
        for (int i = 0; i < n.length(); i++) {
            sub = "";
            has = n[i] - 48;
            for (int j = act; j < (has + act); j++) {
                sub += rec[j];
            }
            act += has;
            printf("%c", morse[sub]);
        }
        printf("\n");
    }

    return 0;
}

