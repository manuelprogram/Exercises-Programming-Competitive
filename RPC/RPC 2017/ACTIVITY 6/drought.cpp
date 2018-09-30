/* 
 * File:   main.cpp
 * Author: PERSONAL
 *
 * Created on 15 de junio de 2017, 11:06 PM
 */

#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int ulli;
/*
 * 
 */

struct dato {
    int alto, base;
};

void view(stack<dato> s){
    dato y;
    while (!s.empty()) {
        y=s.top();
        printf("%d %d\n",y.alto,y.base);
        s.pop();
    }
}

int main(int argc, char** argv) {
    int cas, largo, base[10009] = {0}, n, maxi;
    ulli volumen;
    dato aux, aux2;
    scanf("%d", &cas);
    while (cas--) {
        maxi = 0;
        volumen = 0;
        stack<dato> st;
        scanf("%d %d", &largo, &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &base[i]);
        }
        for (int i = 0; i < n + 1; i++) {
            scanf("%d", &aux.alto);
            aux.base = base[i];
            if (i > 1) {
                while (st.size() > 1&&(aux2 = st.top()).alto!=maxi) {
                    if (aux2.alto < aux.alto) {
                        aux.base += aux2.base;
                        st.pop();
                    } else {
                        break;
                    }
                }
            }
            st.push(aux);
            if (aux.alto > maxi) {
                maxi = aux.alto;
            }
        }
        //view(st);
        while (st.size() > 1) {
            aux = st.top();
            st.pop();
            aux2 = st.top();
            if (aux.alto < aux2.alto) {
                volumen += (ulli) largo * aux.alto * aux.base;
            } else {
                volumen += (ulli) largo * aux.base * aux2.alto;
            }
        }
        printf("%llu\n", volumen);
    }

    return 0;
}

