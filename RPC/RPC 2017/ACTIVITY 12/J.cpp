#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;

vector<bool> vis;

void bfs(int nodo, vector<vi> &lista){
    vi vec;
    queue<int> cola;
    cola.push(nodo);

    while(cola.size()){
        nodo = cola.front();
        cola.pop();

        if(vis[nodo]) continue;
        vis[nodo] = true;
        vec.push_back(nodo);

        for(int i = 0; i < lista[nodo].size(); i++){
            cola.push(lista[nodo][i]);
        }
    }
}

int main(){
    int casos;
    char x[10], y[10];
    char t[10], q;
    bool salir = false;
    string t2;

    while(scanf("%c", &q) != EOF){

        vector<vi> grafo((q - 'A') + 1);
        vis.assign(grafo.size(), false);
        getchar();

        /*while(gets(x)&&x[0] != '\0'){
            grafo[x[0] - 'A'].push_back(x[1] - 'A');
            grafo[x[1] - 'A'].push_back(x[0] - 'A');
        }*/

        while(1){
            if(!gets(x)){
                salir = true;
                break;
            }
            if(x[0] == '\0') break;
            grafo[x[0] - 'A'].push_back(x[1] - 'A');
            grafo[x[1] - 'A'].push_back(x[0] - 'A');
        }
        //cout << "fin nodos\n";

        int con = 0;
        for(int i = 0; i < grafo.size(); i++){
            if(!vis[i]){
                bfs(i, grafo);
                con++;
            }
        }
        printf("%d\n", con);
        if(salir) break;
    }


    return 0;
}
