#include<bits/stdc++.h>
using namespace std;


class tnode{

    public:

    int data;
    tnode* left;
    tnode* right;

    vector<int>kLevel;

    tnode(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }

    void inorder(tnode* root){
        if(root==nullptr)return; 
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    
    void preorder(tnode* root){
        if(root==nullptr)return; 
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    
    void postorder(tnode* root){
        if(root==nullptr)return; 
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

    int height(tnode* root){
        if(root==nullptr)return 0;

        return max(height(root->left), height(root->right))+1;
    }

    void printK(tnode* root, int k){
        if(root==nullptr || k==0)return;
        if(k==1)kLevel.push_back(root->data);
        
        printK(root->left, k-1);
        printK(root->right, k-1);
    }

    void printVector(vector<int>&vector){
        for(auto val:vector){
            cout<<val<<"  ";
        }
    
    }
    

};

int main(){

    tnode* root = new tnode(10);  //new returns a pointer and we cant put it in object[tnode root], so use pointer to store itm
    root->left = new tnode(20);
    root->right = new tnode(30);
    root->right->left = new tnode(40);


    cout<<"//preorder traversal"<<endl;
    root->preorder(root);
    cout<<endl;
    cout<<"//height"<<endl;
    cout<<root->height(root);
    cout<<endl;
    
    root->printK(root, 2);
    
    cout<<"//k-Level traversal"<<endl;
    root->printVector(root->kLevel);

    
    


    return 0;
}