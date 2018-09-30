/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 13 de febrero de 2017, 10:33 AM
 */

#include <bits/stdc++.h>

typedef long long int largo;


using namespace std;
vector<pair<int, int> > espera;
largo max = 0;

struct surf {
    int time;
    int fun;
    int wait;
    bool check=0;
} data[300000], data2[300001];

bool cmp(surf a, surf b) {
    return a.time < b.time;
}

int main(int argc, char** argv) {
    int cas;
    scanf("%d", &cas);
    for (int i = 0; i < cas; i++) {
        scanf("%d %d %d", &data[i].time, &data[i].fun, &data[i].wait);
        
    }
    sort(data, data + cas, cmp);
    
    for (int i = 0; i < cas; i++) {
    }
    return 0;
}

