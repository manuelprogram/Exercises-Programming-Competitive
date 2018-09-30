#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;

int ar[520];
set<iii> s;

void llenar(){
    memset(ar, 0, sizeof(ar));
    int c;
    double c2;
    for(int i = 1; i < 520; i++){
        for(int j = i + 1; j < 520; j++){
            c = (i*i) + (j*j);
            c2 = sqrt(c);
            if(c2 > 520) break;
            if(c2 == (int) c2){
                s.insert(iii(i, ii(j, (int)c2)));
            }
        }
    }
    int pos = 0;
    iii par1;
    ii par2;
    for(set<iii>::iterator it=s.begin(); it!=s.end(); it++){
        par1 = *it;
        par2 = par1.second;
        ar[par2.second]++;
        //cout << "par " << par1.first << " , " << par2.first << " , " << par2.second << endl;
    }
    for(int i = 1; i < 520; i++){
        ar[i] += ar[i - 1];
    }
}

int main(){
    //freopen("salida.txt", "w", stdout);
    llenar();
    int n;
    while(scanf("%d", &n) && n){
        printf("%d\n", ar[n]);
    }

    return 0;
}


