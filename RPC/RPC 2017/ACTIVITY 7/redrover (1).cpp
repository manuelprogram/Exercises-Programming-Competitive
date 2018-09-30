
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
bool validar(string r) {
    for (int i = 0; i < r.length() - 1; i++) {
        if (r[i] != r[i + 1]) {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char** argv) {
    string cad, aux, dos;
    map<string, int> m;
    cin>>cad;
    int rep = 1000000, var;
    for (int cn = 2; cn < cad.length(); cn++) {

        for (int i = 0; i + cn < cad.length(); i++) {
            aux = cad.substr(i, cn);
            if (!m[aux]) {
                int con = 0;
                for (int j = 0; j + cn <= cad.length(); j++) {
                    if (aux == cad.substr(j, cn)) {
                        //cout << "de " << j;
                        j += cn - 1;
                        //cout << " va a " << j + 1 << endl;
                        con++;
                    }
                }
                //cout << aux << " aparece " << con << endl;
                rep = min(rep, ((int) cad.length() - (con * cn) + con + cn));
                m[aux] = con;
            }
        }

    }
    printf("%d\n", min((int) cad.length(), rep));
    return 0;
}

