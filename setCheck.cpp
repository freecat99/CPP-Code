#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<string>words = {"hi", "elf"};
    
    for(int i=0; i<words.size(); i++){
        set<char>letters;
        string word = words[i];
        for(int j=0; j<word.size(); j++){
            letters.insert(word[j]);
        }
        for (auto it = letters.begin(); it != letters.end(); ++it)
        cout << *it << " ";

    }

    
        
    return 0;
}
