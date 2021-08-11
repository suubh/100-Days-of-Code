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
int findMin(BSTNode *root){
	while(root->left !=NULL){
		root = root ->left;
	}
	return root->data;
}
int findMax(BSTNode *root){
	while(root->right !=NULL){
		root = root->right;
	}
	return root->data;
}

int main(){
	BSTNode *root = NULL;
	root = insert(2,root);
	root = insert(5,root);
	root = insert(8,root);
	root = insert(16,root);
	root = insert(4,root);
	cout << "Max is : " << findMax(root) << endl;
	cout << "Min is : " << findMin(root) << endl;
	return 0;
}