#include<bits/stdc++.h>

using namespace std;

vector<int> v{1, 2, 4, 6, 8, 14, 15, 16, 21, 22, 31, 35, 44 ,45, 56, 87, 89, 95, 99, 100, 103, 112, 128};

int f(int pos, int b){
    return v[pos] > b;
}

int busqueda_binaria(int men, int may, int b){
    int epsilon = 1, current = 0;

    while(may-men > epsilon){
        current = (may+men)/2;
        if(f(current,b))
            may = current;
        else
            men = current;
    }
    return men;
}

bool f2(int pos, int b){
    return pos > b*b;
}

float busqueda_binaria2(float men, float may, int b){
    float epsilon = 1e-6, current = 0;
    //cout<<"men "<<men<<" may "<<may<<"\n";
    while(fabs(may-men) >= epsilon){
        current = (may+men)/2;
        if(f2(current,b)){
            may = current;
        }else{
            men = current;
        }
    //cout<<"men "<<men<<" may "<<may<<" asd "<<f(current,b)<<"\n";
    }
    return current;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x;
    cin >> x;
    cout << busqueda_binaria(0,v.size(),x) << "\n";
    cout << busqueda_binaria2(20,30,5) << "\n";
return 0;
}

