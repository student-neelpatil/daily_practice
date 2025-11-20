#include<iostream>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        val = value;
        left = nullptr;
        right = nullptr;
    }

    
};

int countNodes(TreeNode*root){

        if(root==nullptr){
            return 0;
        }
        else{
            int count=1+countNodes(root->left)+countNodes(root->right);
            return count;
        }
    }

int main(){
    TreeNode*a=new TreeNode(2);
    TreeNode*b=new TreeNode(3);
    TreeNode*c=new TreeNode(9);
    TreeNode*d=new TreeNode(5);
    TreeNode*e=new TreeNode(6);
    TreeNode*g=new TreeNode(10);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=g;

   int count=countNodes(a);
   cout<<count;

}
