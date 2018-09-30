#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> ii;//peso, nodo
typedef pair<int, ii> iii;//anterior, peso, nodo
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<int> vi;
#define inf 1000000000

void dijkstra(vvii &grafo, int nodo, int tam, int des, int caso){
    vi dis(tam + 1, inf);
    vector<string> camino(tam + 1, "");
    priority_queue<iii> cola;
    cola.push(iii(-1, ii(-0, nodo)));
    int peso, aux;
    ii par, par2;
    iii auxpar;

    while(cola.size()){
        auxpar = cola.top();
        par = auxpar.second;
        cola.pop();
        peso = -par.first;
        nodo = par.second;

        if(dis[nodo] <= peso) continue;
        dis[nodo] = peso;

        if(auxpar.first != -1) {
            //cout << "de " << auxpar.first << " venimos a " << nodo << " llegamos con " << camino[auxpar.first] << endl;
            stringstream ss;
            ss << camino[auxpar.first];
            ss << auxpar.first;
            ss << " ";
            //cout << "anterior: " << camino[nodo] << endl;
            camino[nodo] = ss.str();
            //cout << "siguiente: " << camino[nodo] << endl;
        }

        for(int i = 0; i < grafo[nodo].size(); i++){
            par2 = grafo[nodo][i];
            aux = dis[nodo] + par2.first;
            if(dis[par2.second] > aux){
                cola.push(iii(nodo, ii(-aux, par2.second)));
            }
        }
    }

    if(dis[des] == inf) cout << "Case #" << caso << ": Path does not exist" << endl;
    else{
        cout << "Case #" << caso << ": " << dis[des] << endl;
        printf("%s%d\n", camino[des].c_str(), des);
    }
}

int main(){

    int casos, v, t, x, y, z, ini, des;
    scanf("%d", &casos);
    string cad, aux;
    char cadena[10000];

    for(int i = 1; i <= casos; i++){
        scanf("%d %d", &v, &t);
        vvii grafo(51);
        getchar();

        for(int j = 0; j < v; j++){
            gets(cadena);
            cad = (string) cadena;
            //cout << "cadena leida: " << cad << endl;
            stringstream ss (cad);
            ss >> aux;
            x = atoi(aux.c_str());
            while(ss >> aux){
                y = atoi(aux.c_str());
                ss >> aux;
                z = atoi(aux.c_str());
                grafo[x].push_back(ii(z, y));
                //cout << x << " a " << y << " con peso: " << z << endl;
            }
        }
        for(int j = 0; j < t; j++){
            scanf("%d %d", &x, &y);
            grafo[x].push_back(ii(0, y));
            grafo[y].push_back(ii(0, x));
            //cout << "portal de " << x << " a " << y << endl;
        }

        scanf("%d %d", &ini, &des);
        //cout << "vamos de " << ini << " hasta " << des << endl;
        dijkstra(grafo, ini, v, des, i);
    }

    return 0;
}


