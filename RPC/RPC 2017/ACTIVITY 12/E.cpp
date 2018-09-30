#include <bits/stdc++.h>

using namespace std;
typedef vector<string> vs;
typedef vector<int> vi;

bool num[110];

bool isNum(string q){
    for(int i = 0; i < q.length(); i++){
        if(q[i] < '0' || q[i] > '9'){
            if(q[i] == '-' && i == 0) continue;
            return false;
        }
    }
    return true;
}

string upper(string q){
    string w = "";
    char c;
    for(int i = 0; i < q.length(); i++){
        if(q[i] > 'Z') c = (q[i] - 'a') + 'A';
        else c = q[i];
        w.push_back(c);
    }
    return w;
}

bool cmp(string x, string y){
    string q = upper(x), w = upper(y);
    if(q == w){
        return x < y;
    }else{
        return q < w;
    }
}

int main(){

    string s;

    while(getline(cin, s)){
        if(s[0] == '.') break;
        stringstream ss (s);
        string aux;
        memset(num, false, sizeof(num));
        vs texto;
        vi numeros;
        int index = 0;

        while(ss >> aux){
            aux = aux.substr(0, aux.length() - 1);
            //cout << "entra " << aux << endl;
            if(isNum(aux)){
                num[index] = true;
                numeros.push_back(atoi(aux.c_str()));
                //cout << "numero: " << atoi(aux.c_str()) << endl;
            }else{
                texto.push_back(aux);
                //cout << "texto" << endl;
            }
            index++;
        }

        sort(texto.begin(), texto.end(), cmp);
        sort(numeros.begin(), numeros.end());
        index--;

        int in = 0, it = 0;
        for(int i = 0; i < index; i++){
            if(num[i]){
                printf("%d, ", numeros[in++]);
            }else{
                printf("%s, ", texto[it++].c_str());
            }
        }

        if(num[index]){
            printf("%d.\n", numeros[in++]);
        }else{
            printf("%s.\n", texto[it++].c_str());
        }
    }

    return 0;
}


