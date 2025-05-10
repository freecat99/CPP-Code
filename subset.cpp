#include<bits/stdc++.h>
using namespace std;

void printSubsets(string input, string output){
    if(input.size()==0){
        cout<<"'"<<output<<"' ";
        return;
    }
    string op1 = output;
    string op2 = output + input[0];

    input.erase(input.begin()+0);

    printSubsets(input, op1);
    printSubsets(input, op2);


}

int main(){
    string str = "abc";
    printSubsets(str, "");
    return 0;
}