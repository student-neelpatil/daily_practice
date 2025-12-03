#include<iostream>
using namespace std;

class Node{
public: 
    int val;
    Node*left;
    Node*right;

    Node(int val){
        this->val=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};

void display(Node*root){
    if(root==nullptr){
        return ;
    }

    cout<<root->val;
    display(root->left);
    display(root->right);
}

int main(){
    Node*a=new Node(10);
    display(a);
}