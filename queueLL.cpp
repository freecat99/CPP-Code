#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(){
        data = 0;
        next = nullptr;
    }
    Node(int val){
        data = val;
        next = nullptr;
    }
};

class kyu{
    Node *head;
    Node *tail;

    public:

    kyu(){
        head = tail = nullptr;
    }
    ~kyu(){};
    
    bool isEmpty(){
        return head==nullptr;
    }
    void enkyu(int val){
        Node* temp = new Node(val);
        if(isEmpty()){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;  
        }
    } 
    int dekyu(){
        if(isEmpty()){
            return -1;
        }
        int val = head->data;
        Node* temp = head;
        head = head->next;
        delete(temp);
        if(head==nullptr){tail=nullptr;}
        return val;

    }
    
    void disp(){
        Node* temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"X";
    }
    int front(){
        if(isEmpty()){
            return -1;
        }
        return head->data;
    }
    int back(){
        if(isEmpty()){
            return -1;
        }
        return tail->data;
    }
    
};

int main(){
    kyu q;
    q.enkyu(2);
    q.enkyu(5);
    q.enkyu(6);
    q.dekyu();
    cout<<"front: "<<q.front()<<endl;
    cout<<"back: "<<q.back()<<endl;
    q.enkyu(88);
    q.disp();

    return 0;
}   