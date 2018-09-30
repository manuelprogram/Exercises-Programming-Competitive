#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int ulli;

char cad[100];

ulli raizDig(){
    int l = strlen(cad);
    ulli n = 0;
    for(int i = 0; i < l; i++){
        n += (cad[i] - '0');
    }

    ulli suma = n, aux = n;

    while(aux > 9){
        suma = 0;
        while(aux){
            //cout << aux << endl;
            suma += (aux % 10);
            aux = aux / 10;

        }
        aux = suma;
        //cout << "suma = " << suma << "---------------" << endl;
    }

    return suma;
}

int main(){
    ulli n;

    while(scanf("%s", &cad), cad[0] != '0'){
        printf("%llu\n", raizDig());
    }

    return 0;
}
