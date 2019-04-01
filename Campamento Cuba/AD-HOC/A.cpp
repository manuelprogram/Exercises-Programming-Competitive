#include<bits/stdc++.h>

using namespace std;

int main(){
    int tc,len,cn;
    bool adn=0;
    vector<int> v;
    char cad[1000009];
    scanf("%d",&tc);
    while(tc--){
        cn=0;
        v.clear();
        scanf("%s",&cad);
        len=strlen(cad);
        for(int i=0; i < len; i++){
            adn=(cad[i]=='A'||cad[i]=='G');
            if(adn){
                ++cn;
            }else{
                if(cn)v.push_back(cn);
                cn=0;
                v.push_back(cn);
            }
        }
        if(cn)v.push_back(cn);

        for(int i=0; i < v.size(); i++){
            printf("%d ", v[i]);
        }

        for(int i=0; i < v.size(); i++){
            printf("%d ", v[i]);
        }
        printf("\n" );
    }
return 0;
}
