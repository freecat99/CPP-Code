#include<bits/stdc++.h>
using namespace std;

class queueArr{
    vector<int>arr;

    public:

    bool isItEmpty(){
        if(arr.size()==0){
            return true;
        }
        return false;
    }
    
    void enqueue(int num){
        arr.push_back(num);
    }
    
    int dequeue(){
        int val = arr[0];
        if(!isItEmpty()){
            arr.erase(arr.begin());
        }

        return val;
    }

    void display(){
        for(int num:arr){
            cout<<num<<"->";
        }
        cout<<"X";
    }

    int frontQ(){
        if(!isItEmpty()){
            return arr[0];
        }
    }
    int backQ(){
        if(!isItEmpty()){
            return arr[arr.size()-1];
        }
    }
    
};


int main(){
    queueArr q;
    q.enqueue(3);
    q.enqueue(4);
    q.dequeue();
    q.enqueue(5);
    q.display();
    cout<<endl;
    cout<<q.frontQ();
    cout<<endl;
    cout<<q.backQ();


    return 0;
}