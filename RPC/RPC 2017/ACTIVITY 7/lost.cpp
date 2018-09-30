#include <bits/stdc++.h>

int inf = 1000000000;

using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

vector<vii> grafo (110);//padre, <hijo, peso>
map<string, int> mapa;
bool posible;

vi bfs(vector<vii> &lista, int n, int lon){
	vi dis (lon, inf);
	queue <int> cola;
	cola.push(n);
	int nodo, aux;
	dis[n] = 0;
	vi costo(lon, inf);
	costo[n] = 0;
	posible = true;

	while(cola.size()){
		nodo = cola.front();
		cola.pop();
		aux = dis[nodo] + 1;
		for(int i = 0; i < lista[nodo].size(); i++){
			if (dis[lista[nodo][i].first] >= aux) {
                //if(dis[lista[nodo][i].first] == inf)
                costo[lista[nodo][i].first] = min(lista[nodo][i].second,
                                                 costo[lista[nodo][i].first]);
                //else
                  //  costo[lista[nodo][i].first]
				dis[lista[nodo][i].first] = aux;
				cola.push(lista[nodo][i].first);
			}
		}
	}

    for(int j = 0; j < dis.size(); j++){
        if(dis[j] == inf){
            posible = false;
            break;
        }
    }
	return costo;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int tam, m, con = 1;
	cin >> tam >> m;

    mapa["English"] = 0;
	for(int j = 0; j < tam; j++){
        string aux1;
        cin >> aux1;
        mapa[aux1] = con++;
	}

	string c1, c2;
	int peso;
	for(int j = 0; j < m; j++){
        cin >> c1 >> c2 >> peso;
        ii nuevo = ii(mapa[c2], peso);
        ii nuevo2 = ii(mapa[c1], peso);
        grafo[mapa[c1]].push_back(nuevo);
        grafo[mapa[c2]].push_back(nuevo2);
	}

	vi res = bfs(grafo, 0, tam + 1);

	if(posible){
        unsigned long long int acum = 0;
        for(int j = 0; j < res.size(); j++) acum += res[j];
        cout << acum << "\n";
     }else{
         cout << "Impossible" << "\n";
     }
	return 0;
}
