#include<bits/stdc++.h>

using namespace std;

map<char, char> mapa;

void llenar(){
    mapa['R'] = 'S';
    mapa['B'] = 'K';
    mapa['L'] = 'H';
}

bool distinto(string d){
    sort(d.begin(), d.end());
    if(d[0] != d[1] && d[1] != d[2]) return true;
    else return false;
}

int main(){
  string cad;
  while(cin>> cad){
      llenar();
      string res;
      int l = cad.length();
      for(int i=0; i < cad.length(); i++){
          if(i + 3 > cad.length())
            res.push_back(mapa[cad[i]]);
            else{
                if(distinto(cad.substr(i, 3))){
                    res.push_back('C');
                    i += 2;
                }else res.push_back(mapa[cad[i]]);
            }
      }

        cout << res << '\n';
  }
return 0;
}
