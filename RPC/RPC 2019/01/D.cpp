#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int ulli;

string frase[25];
map<string, ulli> can;
map<string, ulli> total;//total
map<string, ulli> correct;
map<string, string> trad;

void ini(){
    can.clear();
    total.clear();
    correct.clear();
    trad.clear();
}

int main(){
    int n, m;
    char cad[50];
    char hol[50], ing[50], res[50];

    while(scanf("%d", &n) != EOF){
        ini();
        int pos = 1;
        for(int i = 0; i < n; i++){
            scanf("%s", &cad);
            frase[i] = (string) cad;
            //printf("leyo %s\n", cad);
            can[frase[i]]++;
        }

        scanf("%d", &m);
        for(int i = 0; i < m; i++){
            scanf("%s %s %s", &hol, &ing, &res);
            string fff = (string) hol;
            total[fff]++;
            if(res[0] == 'c'){
                trad[fff] = ing;
                correct[fff]++;
                continue;
            }
            trad[fff] = ing;
        }

        map<string,ulli>::iterator it = can.begin();
        ulli totales = 1, correctos = 1;


        for(; it != can.end(); it++){
            string ss = (it->first);
            ulli aux = (it->second);
            correctos *= pow(correct[ss],aux);
            totales *= pow(total[ss],aux);
            //printf("%s aparece %d | con %d traducciones\n", ss.c_str(), aux, correct[ss]);
        }
        //printf("\n\n");

        if(totales == 1){
            stringstream unico("");
            unico << trad[frase[0]];
            for(int i = 1; i < n; i++){
                unico << " ";
                unico << trad[frase[i]];
            }
            printf("%s\n", unico.str().c_str());
            if(correctos) printf("correct\n");
            else printf("incorrect\n");
        }else{
            printf("%llu correct\n%llu incorrect\n", correctos, totales-correctos);
        }
    }

    return 0;
}




