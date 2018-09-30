#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;

void dfs(int nodo, vector<bool> &vis, vi &can, vvi &grafo){
    //cout << "para nodo " << nodo << endl;
    if(vis[nodo]) return;
    vis[nodo] = true;
    int aux;

    for(int i = 0; i < grafo[nodo].size(); i++){
        aux = grafo[nodo][i];
        can[aux]++;
        if(can[aux] >= grafo[aux].size() - can[aux]) {
            //cout << can[aux] << " >= " << (grafo[aux].size() >> 1) + grafo[aux].size() % 2 << endl;
            dfs(aux, vis, can, grafo);
        }
    }
}

int main(){

    int c, p, x, l, q, w;
    while(scanf("%d %d %d %d", &c, &p, &x, &l) != EOF){
        vvi grafo(c + 1);
        vector<bool> vis(c+1, 0);
        vi can(c + 1, 0);

        for(int i = 0; i < p; i++){
            scanf("%d %d", &q, &w);
            grafo[q].push_back(w);
            grafo[w].push_back(q);
            //can[q]++;
            //can[w]++;
        }
        dfs(l, vis, can, grafo);
        if(vis[x]) printf("leave\n");
        else printf("stay\n");
    }
    return 0;
}
