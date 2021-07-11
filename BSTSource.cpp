// Binary Search Tree - Implemenation in C++
// Simple program to create a BST of integers and search an element in it 
#include<iostream>
#include "bstree.h"
using namespace std;


bool is_bst_rec(BstNode* root,
	int min_value,
	int max_value)
{
	////
	if (root == nullptr) {
		return true;
	}

	if (root->data < min_value ||
		root->data > max_value) {
		return false;
	}

	return
		is_bst_rec(root->left, min_value, root->data) &&
		is_bst_rec(root->right, root->data, max_value);
	/////
}
bool isBST(BstNode* root)
{
	return
		is_bst_rec(
		root,
		numeric_limits<int>::min(),
		numeric_limits<int>::max());
}

int main() {
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = Insert(root, 15);
	root = Insert(root, 10);
	root = Insert(root, 20);
	root = Insert(root, 25);
	root = Insert(root, 8);
	root = Insert(root, 12);
	// Ask user to enter a number.  
	/*int number;
	cout << "Enter number be searched\n";
	cin >> number;
	//If number is found, print "FOUND"
	if (Search(root, number) == true) cout << "Found\n";
	else cout << "Not Found\n";*/
	cout<<isBST(root)<<endl;
	system("PAUSE");
}
