#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> ii;

string tec[3];
map<char, ii> mapa;
int mf[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int mc[] = {0, 1, 1, 1, 0, -1, -1, -1};

void llenar(){
    tec[0] = "qwertyuiop";
    tec[1] = "asdfghjkl ";
    tec[2] = "zxcvbnm   ";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 10; j++)
            mapa[tec[i][j]] = ii(i, j);
}

bool valido(int a, int b){
    return !(a < 0 || a > 2 || b < 0 || b > 9);
}

bool adyacente(char ca, char cb){
    ii par = mapa[ca];
    int a, b;
    for(int i = 0; i < 8; i++){
        a = par.first + mf[i];
        b = par.second + mc[i];
        //cout << "probando tecla " << a << " , " << b << endl;
        if(valido(a, b)){
            //cout << "tecla valida, es " << tec[a][b] << endl;
            if(tec[a][b] == cb) return true;
        }
    }
    //cout << "h en " << par.first << " , " << par.second << endl;
    //cout << ca << " no es ady de " << cb << endl;
    return false;
}

bool ok(string &q, string &w){
    if(!q.size() || !w.size()) return false;
    if(q[0] == w[0]){
        q = q.substr(1);
        w = w.substr(1);
        return true;
    }
    return false;
}

bool forgot(string &q, string &w){
    if(!q.size()) return false;
    q = q.substr(1);
    return true;
}

bool wrong(string &q, string &w){
    if(!q.size() || !w.size()) return false;
    if(q[0] != w[0] && adyacente(q[0], w[0])){
        q = q.substr(1);
        w = w.substr(1);
        return true;
    }
    return false;
}

bool extraRight(string &q, string &w){
    if(!q.size() || w.size() < 2) return false;
    if(q[0] != w[1] && q[0] == w[0] && adyacente(q[0], w[1])){
        q = q.substr(1);
        w = w.substr(2);
        return true;
    }
    return false;
}

bool extraLeft(string &q, string &w){
    if(!q.size() || w.size() < 2) return false;
    if(q[0] != w[0] && q[0] == w[1] && adyacente(q[0], w[0])){
        q = q.substr(1);
        w = w.substr(2);
        return true;
    }
    return false;
}

bool probar(int v, string &aux, string &aux2, string &res){
    bool b = false;
    switch(v){
        case 0:
            b = forgot(aux, aux2);
            if(b) res.push_back('f');
            break;
        case 1:
            b = extraLeft(aux, aux2);
            if(b) res.push_back('l');
            break;
        case 2:
            b = ok(aux, aux2);
            if(b) res.push_back('o');
            break;
        case 3:
            b = extraRight(aux, aux2);
            if(b) res.push_back('r');
            break;
        default:
            b = wrong(aux, aux2);
            if(b) res.push_back('w');
            break;
    }
    return b;
}

void backtraking(string ini, string fin, string res){
    //cout << "llega con: " << ini << " , " << fin << " hasta ahora lleva " << res << endl;
    if(!ini.length() && !fin.length()){
        //cout << "------------------------respuesta: " << res << endl;
        printf("%s\n", res.c_str());
        return;
    }

    string aux1, aux2, aux3;
    for(int i = 0; i < 5; i++){
        aux1 = ini, aux2 = fin, aux3 = res;
        if(probar(i, aux1, aux2, aux3)){
            //cout << "llamado con " << i << endl;
            backtraking(aux1, aux2, aux3);
        }
    }
    //cout << "fin llamado recursivo\n";
}

int main(){
    llenar();

    int casos;
    scanf("%d", &casos);
    getchar();
    string ini, out, res;

    while(casos--){
        getline(cin, ini);
        getline(cin, out);
        res = "";
        printf("%s %s:\n", ini.c_str(), out.c_str());
        backtraking(ini, out, res);
        printf("\n");
    }

    return 0;
}


