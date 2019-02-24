#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> ii;
vector<int> a, s;
vector<ii> v;

bool cmp(ii a, ii b){
    if(a.second == b.second){
        return a.first < b.first;
    }else{
        return a.second > b.second;
    }
}

int main(){
    int n, k, x;
    while(scanf("%d %d", &n, &k) != EOF){
        a.clear();
        s.clear();

        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < k; i++){
            scanf("%d", &x);
            s.push_back(x);
        }

        int buscar, indice, con;
        vector<int>::iterator low;

        for(int i = 0; i < s.size(); i++){
            con = 0;
            for(int j = 0; j < a.size(); j++){
                buscar = abs(s[i] - a[j]);
                low=std::lower_bound (a.begin(), a.end(), buscar);
                indice = (low- a.begin());
                //printf("indice %d \n", indice);

                if(indice <= j) break;
                if(indice >= 0 && indice < a.size()){
                    if(a[indice] == buscar){
                        //printf("esta\n");
                        con++;
                    }
                }
            }
            v.push_back(ii(s[i], con));
        }

        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < v.size(); i++){
            printf("%d %d\n", v[i].first, v[i].second);
        }
    }

    return 0;
}

