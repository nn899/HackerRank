#include <iostream>

using namespace std;

struct treeNode
{
	int data;
	treeNode *left;
	treeNode *right;
};

treeNode* addToTree(int num)
{
	treeNode *newNode=new treeNode;
	newNode->data=num;
	newNode->right=NULL;
	newNode->left=NULL;
	return(newNode);
}

void preorderTraversal(treeNode *root)
{
	if(root == NULL)
		return;
	std::cout<<" "<<root->data<<" ";
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}

void inorderTraversal(treeNode *root)
{
	if(root == NULL)
		return;
	inorderTraversal(root->left);
	std::cout<<" "<<root->data<<" ";
	inorderTraversal(root->right);
}

void postorderTraversal(treeNode *root)
{
	if(root == NULL)
		return;
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	std::cout<<" "<<root->data<<" ";
}

int main()
{
	treeNode *root=addToTree(1);
	root->left=addToTree(2);
	root->right=addToTree(3);
	root->left->left=addToTree(4);
	root->left->right=addToTree(5);

	std::cout<<"Preorder :";
	preorderTraversal(root);

	std::cout<<endl<<"Inorder :";
	inorderTraversal(root);

	std::cout<<endl<<"PostOrder :";
	postorderTraversal(root);

	std::cout<<endl;
}
