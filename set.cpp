#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>st;
    st.insert(2);
    st.insert(222);
    st.insert(12);
    st.insert(22);
    st.insert(23);
    cout << *st.begin() << endl;
    cout << *--st.end()<<endl;
    return 0;    

}