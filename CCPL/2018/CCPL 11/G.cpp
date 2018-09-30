#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> ii;

char cad[2000];

int main(){

    int n, x1, y1, x2, y2;
    while(scanf("%d", &n) != EOF){

        vector<ii> puntos;
        double dist[3], eps = 1e-5;
        int con = 0;

        for(int i = 0; i < n; i++){
            scanf("%d %d", &x1, &y1);
            puntos.push_back(ii(x1, y1));
        }

        for(int i = 0; i < puntos.size(); i++){
            for(int j = i+1; j < puntos.size(); j++){
                for(int k = j+1; k < puntos.size(); k++){
                    dist[0] = hypot(puntos[i].first-puntos[j].first,puntos[i].second-puntos[j].second);
                    dist[1] = hypot(puntos[i].first-puntos[k].first,puntos[i].second-puntos[k].second);
                    dist[2] = hypot(puntos[j].first-puntos[k].first,puntos[j].second-puntos[k].second);
                    sort(dist, dist+3);

                    if(fabs(hypot(dist[0], dist[1]) - dist[2]) < eps) con++;
                }
            }
        }
        printf("%d\n", con);
    }

    return 0;
}


