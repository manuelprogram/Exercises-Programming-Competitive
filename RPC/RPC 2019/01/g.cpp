#include<bits/stdc++.h>

using namespace std;

struct d{
    string c;
    int v;
    string p;
}ar[2];

bool cmp(d a, d b){
    if((a.c[0]=='B' && b.c[0]=='D') || (a.c[0]=='D' && b.c[0]=='B')){
        return a.c[0] < b.c[0];
    }else{
        return a.c[0] > b.c[0];
    }
}

bool cms(d a, d b){
    return (b.v*2>=a.v);
}

int main(){
    int aa,bb;
    string ca,cb;
    while(cin>>ar[0].c>>ar[0].v){
        ar[0].p="Tobby";
        cin>>ar[1].c>>ar[1].v;
        ar[1].p="Naebbirac";
        sort(ar,ar+2,cmp);
        //sort(ar,ar+2,cms);

        if(ar[0].c==ar[1].c){
            if(ar[0].v == ar[1].v) cout<<"Draw"<<"\n";
            else if(ar[0].v > ar[1].v) cout<<ar[0].p.c_str()<<"\n";
            else cout<<ar[1].p.c_str()<<"\n";
        }else{
            if(ar[0].v*2<=ar[1].v){
                cout<<ar[1].p.c_str()<<"\n";
            }else{
                cout<<ar[0].p.c_str()<<"\n";
            }
        }
        //cout<<"Datos "<<ar[0].v<<" - "<<ar[1].v;

    }
return 0;
}
