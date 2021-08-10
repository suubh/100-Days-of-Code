#include<bits/stdc++.h>
using namespace std;
struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
BSTNode *getNewNode(int data){
	BSTNode *newNode = new BSTNode();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
BSTNode *insert(int x,BSTNode *root){
	if(root == NULL){
		root = getNewNode(x);
		return root;
	}
	else if(x <= root->data){
		root->left = insert(x,root->left);
	}
	else if (x >= root->data){
		root->right = insert(x,root->right);
	}
	return root;
}
bool search(int n, BSTNode *root){
	if(root==NULL){
		return false;
	}
	else if(root->data == n) return true;
	else if(n>root->data) return search(n,root->right);
	else return search(n,root->left);
}
int main(){
	BSTNode *root = NULL;
	root = insert(2,root);
	root = insert(5,root);
	root = insert(8,root);
	root = insert(16,root);
	root = insert(4,root);
	cout << search(8,root) << " | "<<" 0 = False ,1 = True" << endl;
	return 0;
}