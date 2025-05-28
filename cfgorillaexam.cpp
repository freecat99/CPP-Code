#include<bits/stdc++.h>
using namespace std;


void gorira(){
    map<int, int>freqMap;
    int n, k;
    cin>>n>>k;

    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        freqMap[val]++;
    }
    int mapsz = freqMap.size();
    
    vector<int>freq(mapsz);
    int i=0;
    for(auto it:freqMap){
        freq[i] = it.second;
        i++;
    }
    sort(freq.begin(), freq.end());
    int cnt = 0;
    for(int i=0; i<mapsz; i++){
        if(freq[i]<=k && k>0){
            cnt++;
            k-=freq[i];
        }
    }
    cout<<mapsz-cnt<<"\n";
}

int main(){
    int t;
    cin>>t;

    while(t--){
        gorira();
    }

    return 0;
}