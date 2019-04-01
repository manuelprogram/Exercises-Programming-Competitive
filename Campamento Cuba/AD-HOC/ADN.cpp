#include<bits/stdc++.h>

using namespace std;

int main(){
    int tc,len,cn,nu,de,an2,an3;
    double div,rta2,rta3;
    bool adn,bi=0;
    vector<int> v;
    char cad[1000009];
    scanf("%d",&tc);
    while(tc--){
        nu=de=cn=an2=an3=0;
        div=rta3=rta2=0;
        bi=adn=0;
        v.clear();
        scanf("%s",&cad);
        len=strlen(cad);
        for(int i=0; i < len; i++){
            adn=(cad[i]=='A'||cad[i]=='G');
            if(adn){
                ++nu;
                ++cn;
                bi=0;
            }else{
                ++de;
                if(cn)v.push_back(cn);
                cn=0;
                if(bi){
                    v.push_back(cn);
                }else{
                    bi=1;
                }
            }
        }
        if(cn)v.push_back(cn);
        if(!nu || !de){
            printf("%d %d\n",nu,de);
            continue;
        }
        div=(double)(1.0*nu/de);
        len=v.size();
        for(int i=0; i< len; i++){
            an2=an3=rta3=rta2=0;
            if(i+1<len){
                if(v[i]){
                   an2+=v[i];
                   an3+=v[i];
                }
                if(v[i+1]){
                   an2+=v[i+1];
                   an3+=v[i+1];
                }
                rta2=(1.0*an2);
                if(rta2 >= div){
                    if(rta2 == div && an2>nu){
                        nu=an2;
                        de=1;
                        div=rta2;
                    }
                    if(rta2>div){
                        nu=an2;
                        de=1;
                        div=rta2;
                    }
                }
            }
            if(i+2<len){
                if(v[i+2]){
                   an3+=v[i+2];
                }
                rta3=(1.0*an3/2);
                if(rta3 >= div){
                   if(rta3 == div && an3>nu){
                        nu=an3;
                        de=2;
                        div=rta3;
                    }
                    if(rta3>div){
                        nu=an3;
                        de=2;
                        div=rta3;
                    }
                }
            }
        }
        printf("%d %d\n", nu,de);
    }
return 0;
}
//3003003
