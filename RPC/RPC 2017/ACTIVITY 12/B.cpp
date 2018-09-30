#include <bits/stdc++.h>
#include <string>

using namespace std;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<string> vs;

char cad[1010];
string s_1, s_2;

int main(){

    while(scanf("%s", &cad) != EOF){
        s_1 = (string) cad;
        s_2 = (string) cad;
        vii v1, v2;
        vs s, s2;

        map<string, int> mapa;
        map<char, int> con;
        sort(s_2.begin(), s_2.end());

        string aux;
        for(int i = 0; i < s_2.length(); i++){
            stringstream ss;
            ss << s_2[i];
            ss << (con[s_2[i]]++);
            aux =  ss.str();
            mapa[aux] = i;
        }
        con.clear();
        for(int i = 0; i < s_1.length(); i++){
            stringstream ss;
            ss << s_1[i];
            ss << (con[s_1[i]]++);
            aux =  ss.str();
            s.push_back(aux);
        }

        char c;
        int n2 = 0;
        vs res;

        for(int i = 0; i < s_2.size(); i++){
            res.push_back(s[n2]);
            n2 = mapa[res[i]];
        }

        for(int i = res.size() - 1; i > -1; i--){
            if(res[i][0] != '$') printf("%c", res[i][0]);
        }
        printf("\n");
    }

    return 0;
}


