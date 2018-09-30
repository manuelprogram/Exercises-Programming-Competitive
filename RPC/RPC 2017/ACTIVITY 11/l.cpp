#include <bits/stdc++.h>

using namespace std;

int main(){

    int l, o, s, t, l2, o2, s2, t2;
    int ar[6][4];
    /*
    ar[0] = {4, 0, 0, 0};
    ar[1] = {0, 0, 0, 4};
    ar[2] = {0, 4, 0, 0};
    ar[3] = {2, 0, 2, 0};
    ar[4] = {1, 0, 1, 2};
    ar[5] = {2, 2, 0, 0};
    */
    ar[0][0] = 4;ar[0][1] = 0;ar[0][2] = 0;ar[0][3] = 0;
    ar[1][0] = 0;ar[1][1] = 0;ar[1][2] = 0;ar[1][3] = 4;
    ar[2][0] = 0;ar[2][1] = 4;ar[2][2] = 0;ar[2][3] = 0;
    ar[3][0] = 2;ar[3][1] = 0;ar[3][2] = 2;ar[3][3] = 0;
    ar[4][0] = 1;ar[4][1] = 0;ar[4][2] = 1;ar[4][3] = 2;
    ar[5][0] = 2;ar[5][1] = 2;ar[5][2] = 0;ar[5][3] = 0;

    while(scanf("%d %d %d %d", &l2, &o2, &s2, &t2) != EOF){

        int res = 0, aux, auxmen;
        int i;
        vector<int> v(6);
        for(int j = 0; j < 6; j++) v[j] = j;

        do{
            int resaux = 0;
            l = l2;
            o = o2;
            s = s2;
            t = t2;
            //cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4] << v[5] << endl;;
            for(int j = 0; j < 6; j++){
                i = v[j];
                if(ar[i][0] > l || ar[i][1] > o || ar[i][2] > s || ar[i][3] > t) continue;

                auxmen = 1000000001;
                if(ar[i][0] != 0){
                    aux = l/ar[i][0];
                    auxmen = min(aux, auxmen);
                }

               if(ar[i][1] != 0){
                    aux = o/ar[i][1];
                    auxmen = min(aux, auxmen);
                }

               if(ar[i][2] != 0){
                    aux = s/ar[i][2];
                    auxmen = min(aux, auxmen);
                }

               if(ar[i][3] != 0){
                    aux = t/ar[i][3];
                    auxmen = min(aux, auxmen);
                }

                resaux += auxmen;
                l -= auxmen*ar[i][0];
                o -= auxmen*ar[i][1];
                s -= auxmen*ar[i][2];
                t -= auxmen*ar[i][3];
            }
            //cout << "posible " << resaux << endl;
            res = max(res, resaux);
        }while(next_permutation(v.begin(), v.end()));
        printf("%d\n", res);
    }

    return 0;
}
