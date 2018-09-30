#include <bits/stdc++.h>

using namespace std;

string cad1, cad2;

int main(){

    while(getline(cin, cad1)){
        getline(cin, cad2);
        int c = cad2.length();
        int con = 0;
        if(cad2.length() < cad1.length()) cad2.append(cad1);

        for(int i = 0; i < cad1.length(); i++){
            if(c == i){
                cad2[i] = cad1[con++];
                c++;
            }
            if(cad1[i] - cad2[i] >= 0) cad1[i] -= cad2[i] - 'A';
            else cad1[i] = 'A' + ((((cad1[i] - 'A') - (cad2[i] - 'A')) + 26) % 26);
        }

       cout << cad1 << endl;
    }

    return 0;
}
