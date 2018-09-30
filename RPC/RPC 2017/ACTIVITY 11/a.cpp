#include<bits/stdc++.h>

using namespace std;

map<string,int> m;
map<int,string> ma;
int main(){
  ma[1]="DO";
  ma[2]="DO#";
  ma[3]="RE";
  ma[4]="RE#";
  ma[5]="MI";
  ma[6]="FA";
  ma[7]="FA#";
  ma[8]="SOL";
  ma[9]="SOL#";
  ma[10]="LA";
  ma[11]="LA#";
  ma[12]="SI";
  m["DO"]=1;
  m["DO#"]=2;
  m["RE"]=3;
  m["RE#"]=4;
  m["MI"]=5;
  m["FA"]=6;
  m["FA#"]=7;
  m["SOL"]=8;
  m["SOL#"]=9;
  m["LA"]=10;
  m["LA#"]=11;
  m["SI"]=12;
  int n,aux;
  string cad;
  while(cin>>n>>cad){
      aux=m[cad];
      for(int i=0; i < n; i++){
        if(aux==1){
           aux=12;
        }else{
           aux--;
        }
      }
      printf("%s\n",ma[aux].c_str());
  }
return 0;
}
