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
int findHeight(BSTNode *root){
	if(root == NULL){
		return -1;	//Not considering the edge of the leaf node , if want than return 0
	}
	int left = findHeight(root->left);
	int right = findHeight(root->right);
	if(left > right){
		return left+1;
	}
	return right+1;
}
  
int main(){
	BSTNode *root = NULL;
	root = insert(2,root);
	root = insert(5,root);
	root = insert(8,root);
	root = insert(16,root);
	root = insert(4,root);
	cout << findHeight(root) << endl;
	return 0;
}