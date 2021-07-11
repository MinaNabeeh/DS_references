//Definition of Node for Binary search tree
struct BstNode {
	int data;
	BstNode* left;
	BstNode* right;
};

BstNode* GetNewNode(int data);
BstNode* Insert(BstNode* root, int data);
bool Search(BstNode* root, int data);