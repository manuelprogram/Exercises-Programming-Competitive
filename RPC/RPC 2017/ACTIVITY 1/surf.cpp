#include <bits/stdc++.h>

using namespace std;

typedef long long int largo;
typedef pair<largo, int> ii;

set<ii> ocupado;

struct surf {
    int time;
    largo fun;
    int wait;
} data[300001];

bool cmp(surf a, surf b) {
    return a.time < b.time;
}

int main(int argc, char** argv) {
    int cas;
    set<ii>::iterator it;
    scanf("%d", &cas);
    for (int i = 0; i < cas; i++) {
        scanf("%d %d %d", &data[i].time, &data[i].fun, &data[i].wait);
    }
    sort(data, data + cas, cmp);
    largo may = 0, res = 0;
    int tiempo;
    ii aux;

    for (int i = 0; i < cas; i++) {
        tiempo = data[i].time;
        ocupado.insert(make_pair(tiempo + data[i].wait, i));
        while (ocupado.size() > 0) {
            it = ocupado.begin();
            aux = *it;
            if (aux.first > tiempo) break;

            if (data[aux.second].fun > may) may = data[aux.second].fun;
            ocupado.erase(it);
        }
        data[i].fun = data[i].fun + may;
        res = max(res, data[i].fun);
    }
    cout << res << "\n";
    return 0;
}


