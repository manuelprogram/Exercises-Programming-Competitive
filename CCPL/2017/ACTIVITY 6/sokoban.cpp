#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;

char tab[20][20];
char cad[60];
int f, c;
vector<pii> vec;

bool val(int w, int e){
    if(w == -1 || e == -1 || w == f || e == c) return false;
    if(tab[w][e] == '#') return false;
    return true;
}

void view(){
    for(int k = 0; k < vec.size(); k++){
        if(tab[vec[k].first][vec[k].second] == 'b') tab[vec[k].first][vec[k].second] = 'B';
        if(tab[vec[k].first][vec[k].second] == 'w') tab[vec[k].first][vec[k].second] = 'W';
        if(tab[vec[k].first][vec[k].second] == '.') tab[vec[k].first][vec[k].second] = '+';
    }

     for(int i = 0; i < f; i++){
                printf("%s\n", tab[i]);
        }
}

int main(){
    int t=1;
    while(scanf("%d %d", &f, &c), f, c){
        vec.clear();
        int pf = 0, pc = 0;
        char aux;
        bool ter = false;

        for(int i = 0; i < f; i++){
            scanf("%s", &tab[i]);
            int l = strlen(tab[i]);

            for(int j = 0; j < l; j++){
                aux = tab[i][j];
                if(aux == '+' || aux == 'B' || aux == 'W'){
                    vec.push_back(pii(i, j));
                    if(aux == 'B') tab[i][j] = 'b';
                }
                if(aux == 'W' || aux == 'w'){
                    pf = i;
                    pc = j;
                }
            }
        }

        scanf("%s", &cad);
        int q = strlen(cad);
       // printf("trabajador en %d %d\n", pf, pc);

        for(int i = 0; i < q; i++){
            //printf("para %c\n", cad[i]);
            switch (cad[i]){
                int auxf, auxc;
                case 'U':
                    auxf = pf-1;
                    if(val(auxf, pc)){
                        if(tab[auxf][pc] == 'b'){
                            if(val(auxf-1, pc) && tab[auxf - 1][pc] != 'b'){
                                tab[auxf-1][pc] = 'b';
                                tab[auxf][pc] = 'w';
                                tab[pf][pc] = '.';
                                pf = auxf;
                            }
                        }else{
                            tab[auxf][pc] = 'w';
                            tab[pf][pc] = '.';
                            pf = auxf;
                        }
                    }
                    break;

                case 'D':
                    auxf = pf+1;
                    if(val(auxf, pc)){
                        if(tab[auxf][pc] == 'b'){
                            if(val(auxf+1, pc) && tab[auxf + 1][pc] != 'b'){
                                tab[auxf+1][pc] = 'b';
                                tab[auxf][pc] = 'w';
                                tab[pf][pc] = '.';
                                pf = auxf;
                            }
                        }else{
                            tab[auxf][pc] = 'w';
                            tab[pf][pc] = '.';
                            pf = auxf;
                        }
                    }
                    break;

                case 'L':
                    auxc = pc-1;
                    if(val(pf, auxc)){
                        if(tab[pf][auxc] == 'b'){
                            if(val(pf, auxc-1) && tab[pf][auxc - 1] != 'b'){
                                tab[pf][auxc-1] = 'b';
                                tab[pf][auxc] = 'w';
                                tab[pf][pc] = '.';
                                pc = auxc;
                            }
                        }else{

                            tab[pf][auxc] = 'w';
                            tab[pf][pc] = '.';
                            pc = auxc;
                        }
                    }
                    break;

                case 'R':
                    auxc = pc+1;
                    if(val(pf, auxc)){
                        if(tab[pf][auxc] == 'b'){
                            if(val(pf, auxc+1) && tab[pf][auxc + 1] != 'b'){
                                tab[pf][auxc+1] = 'b';
                                tab[pf][auxc] = 'w';
                                tab[pf][pc] = '.';
                                pc = auxc;
                            }
                        }else{
                            tab[pf][auxc] = 'w';
                            tab[pf][pc] = '.';
                            pc = auxc;
                        }
                    }
                    break;
            }
            //view();
            //printf("\n");

            int con = 0;
            for(int k = 0; k < vec.size(); k++){
                if(tab[vec[k].first][vec[k].second] == 'b') con++;
            }
            if (con == vec.size()){
                ter = true;
                break;
            }
        }

        if(ter)
            printf("Game %d: complete\n",t++);
        else
            printf("Game %d: incomplete\n",t++);

        view();
    }

    return 0;
}
