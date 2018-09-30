#include <bits/stdc++.h>

using namespace std;
typedef pair<string, string> ii;//defensa, ofensiva

ii bla, neg, posb, posn;
queue<string> j;
string cad;
vector<ii> vec;

ii f(ii a, ii color){
    ii res;
    if (color.first > color.second){
        res.first = a.second;
        res.second = a.first;
    }else{
        res.first = a.first;
        res.second = a.second;
    }
    return res;
}

int main(){
    int casos, may = 0, b = 0, n = 0, con = 0;
    scanf("%d", &casos);
    //getchar();

    for(int i = 0; i < casos; i++){
        string aux;
        //getline(cin, aux);
        cin >> aux;
        j.push(aux);
    }
    cin >> cad;
    bla.second = j.front(); j.pop();
    neg.second = j.front(); j.pop();
    bla.first = j.front(); j.pop();
    neg.first = j.front(); j.pop();

    posb.second = con++;
    posn.second = con++;
    posb.first = con++;
    posn.first = con++;

    for(int k = 0; k < cad.length(); k++){
        if(cad[k] == 'W'){
            b++; n = 0;
            swap(bla.first, bla.second);
            swap(posb.first, posb.second);
            j.push(neg.first);
            neg.first = neg.second;
            posn.first = posn.second;
            neg.second = j.front(); j.pop();
            posn.second = con++;
        }else{
            n++; b = 0;
            swap(neg.first, neg.second);
            swap(posn.first, posn.second);
            j.push(bla.first);
            bla.first = bla.second;
            posb.first = posb.second;
            bla.second = j.front(); j.pop();
            posb.second = con++;
        }
        if(b > may){
            may = b;
            vec.clear();
            vec.push_back(f(bla, posb));
            continue;
        }
        if(n > may){
            may = n;
            vec.clear();
            vec.push_back(f(neg, posn));
            continue;
        }
        if(n == may){
            //cout << "tam negro = " << n << endl;
            vec.push_back(f(neg, posn));
            continue;
        }
        if(b == may){
            //cout << "tam blan = " << b <<endl;
            vec.push_back(f(bla, posb));
        }
    }

    //cout << "res = " << vec.size() << endl;
    for(int i = 0; i < vec.size(); i++) cout << vec[i].first << " " << vec[i].second << "\n";

    return 0;
}
