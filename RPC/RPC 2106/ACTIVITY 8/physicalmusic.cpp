#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> x;
vector<int> y;

int main(){
    int casos, subcaso, aux, num;
    cin >> casos;

    for(int i = 0; i < casos; i++){
        x.clear();
        y.clear();
        cin >> subcaso;

         for(int j = 0; j < subcaso; j++){
             cin >> aux;
            x.push_back(aux);
         }

         int menor = x.back();
         for(int j = x.size() -2; j > -1; j--){
             if(x[j] < menor){
                 menor = x[j];
             }else
                y.push_back(x[j]);
         }

        sort(y.begin(), y.end());
        cout << y.size() << endl;
        for (vector<int>::iterator it= y.begin(); it!=y.end(); ++it)
            cout << *it << endl;
    }

    return 0;
}
