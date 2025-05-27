#include<bits/stdc++.h>
using namespace std;


class tnode{

    public:

    int data;
    tnode* left;
    tnode* right;

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

};

int main(){

    tnode* root = new tnode(10);  //new returns a pointer and we cant put it in object[tnode root], so use pointer to store itm
    root->left = new tnode(20);
    root->right = new tnode(30);
    root->right->left = new tnode(40);

    root->preorder(root);
    


    return 0;
}