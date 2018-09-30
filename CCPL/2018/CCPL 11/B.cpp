#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long int llu;

int main(){
    llu n,n1,d1,n2,d2, aux, avance, acum;

    while(scanf("%llu %llu %llu %llu %llu", &n, &n1, &d1, &n2, &d2)==5){
        if(d2 > d1){
            swap(d1, d2);
            swap(n1, n2);
        }

        if(d1 <= n){
            printf("-1\n");
            continue;
        }

        llu acum = 0, con, ant, k = d1-n;
        for(con = 0; acum < n && con < n1; con++){
            ant = acum;
            acum += ((llu)1<<con)*k;
        }
        aux = con;
        //printf("necesitanmos %llu movemos %llu unidades\n", aux, acum);

        if(acum < n){
            n = n-acum;
            if(d2 <= n){
                printf("-1\n");
                continue;
            }
            //printf("falta %llu\n", n);

            acum = 0;
            k = d2-n;
            for(con = 0; acum < n && con < n2; con++){
                ant = acum;
                acum += ((llu)1<<con)*k;
            }
            aux = con;
            //printf("necesitanmos %llu movemos %llu unidades\n", aux, acum);

            if(acum < n) printf("-1\n");
            else printf("%llu\n", n1+aux);
        }else{
            printf("%llu\n", aux);
        }
    }
return 0;
}
