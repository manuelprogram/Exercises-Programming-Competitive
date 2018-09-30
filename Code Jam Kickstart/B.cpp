#include<bits/stdc++.h>

using namespace std;


int main(){
    freopen ("in.txt","r",stdin);
    freopen ("out.txt","w",stdout);
    deque<int> st;
    int t,e,n,ex,cn=1,h,best;
    scanf("%d",&t);
    while(t--){
        st.clear();
        best=h=0;
        scanf("%d %d",&e,&n);
        while(n--){
            scanf("%d",&ex);
            st.push_back(ex);
        }
        sort(st.begin(), st.end());
        while(st.size()){
            if(e>st.front()){
                e-=st.front();
                st.pop_front();
                h++;
            }else{
                if(h){
                    e+=st.back();
                    h--;
                    st.pop_back();
                }else{
                    st.pop_front();
                }
            }
            best=max(best,h);
        }
        printf("Case #%d: %d\n",cn++,best);
    }
return 0;
}
