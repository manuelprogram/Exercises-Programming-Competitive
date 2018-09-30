#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;
typedef long long int lli;

bool cmp(lli a, lli b){
    return a > b;
}

int bs(lli num, vector<lli> &v){
    int epsilon = 1, med = 0;
    int min = 0, max = v.size();

    while(max-min > 1){
        med = (max+min)>>1;
        //cout << "med = " << med << endl;
        if(v[med] >= num){
            min = med;
            //cout << "min = " << med << endl;
        }else{
            max = med;
            //cout << "max = " << med << endl;
        }
    }
    return min + 1;
}

int main(){
    int n;
    lli x;
    while(scanf("%d", &n) != EOF){
        vector<lli> pir, tes;
        for(int i = 0; i < n; i++){
            scanf("%lld", &x);
            pir.push_back(x);
        }
        for(int i = 0; i < n; i++){
            scanf("%lld", &x);
            tes.push_back(x);
        }
        sort(pir.begin(), pir.end(), cmp);
        sort(tes.begin(), tes.end(), cmp);

        //for(int i = 0; i < tes.size(); i++) cout << tes[i] << " ";
        //cout << endl;

        lli res = 1;
        for(int i = 0; i < pir.size(); i++){
            res = ((res % mod) * ((bs(pir[i], tes)-i) % mod)) % mod;
            //cout << "el pirata " << i << " puede tomar "<<bs(pir[i], tes) << " cofres" << endl;
            if(res < 1) break;
        }
        printf("%lld\n", res);
    }

    return 0;
}
