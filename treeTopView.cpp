#include <iostream>

using namespace std;

/*solution to: https://www.hackerrank.com/challenges/tree-top-view*/

struct node
{
    int data;
    node* left;
    node* right;
};

node* addToTree(int num)
{
    node *newNode=new node;
    newNode->data=num;
    newNode->right=NULL;
    newNode->left=NULL;
    return(newNode);
}

void left_view(node *root) {
    if(root == NULL)
        return;
    else
        left_view(root->left);
    cout<<root->data<<" ";
}

void right_view(node *root) {
    if(root == NULL)
        return;
    else
        cout<<root->data<<" ";
    right_view(root->right);
    
}
void top_view(node * root)
{
    if(root == NULL)
        return;
    if(root->left != NULL)
    {
        left_view(root->left);
    }
    cout<<root->data<<" ";
    if(root->right != NULL) {
        right_view(root->right);
    }     
}

int main()
{
    node *root=addToTree(3);
    root->left=addToTree(5);
    root->right=addToTree(2);
    root->left->left=addToTree(1);
    root->left->right=addToTree(4);
    root->left->left->right=addToTree(9);
    root->right->right=addToTree(7);
    root->right->left=addToTree(6);
    root->right->right->left=addToTree(8);
    top_view(root);
}
