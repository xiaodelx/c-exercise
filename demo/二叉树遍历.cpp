#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x) , left(nullptr) , right(nullptr) {}
};
void PreOrder(TreeNode * node){
    if(node == nullptr) return ;
    cout << node -> val << ' ';
    PreOrder(node -> left);
    PreOrder(node -> right);
}
void inorder(TreeNode * node){
    if(node == nullptr) return ;
    inorder(node -> left);
    cout << node -> val << ' ';
    inorder(node -> right);
}
void postorder(TreeNode *node){
    if(node == nullptr) return;
    postorder(node -> left);
    postorder(node -> right);
    cout << node -> val << ' ';
}
int main(){
    TreeNode* root = new TreeNode(4);
	root->left = new TreeNode(2);
	root->right = new TreeNode(6);
	root->left->left = new TreeNode(1);
	root->left->right = new TreeNode(3);
    root -> right -> left = new TreeNode(5);
    root -> right -> right = new TreeNode(7);
    PreOrder(root);
    cout <<'\n';
    inorder(root);
    cout << '\n';
    postorder(root);

}