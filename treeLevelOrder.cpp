/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
int height(node *root) {
    if(root == NULL)
        return 0;
    else
        return 1 + max (height(root->left),height(root->right));
}
void dataAtLevel(node *root, int level) {
    if(root == NULL)
        return;
    if(level == 1)
        cout<<root->data<<" ";
    else {
        dataAtLevel(root->left, level-1);
        dataAtLevel(root->right, level-1);
    }
}
void LevelOrder(node * root)
{
  if(root == NULL)
      return;
  else {
      int h = height(root);
      for(int i = 1; i <= h ; i++ ) {
          dataAtLevel(root,i);
      }
  }
}

