//structure of the node
struct node {
  int key;
  struct node *left, *right;
};

//Prints the inorder traversal of the tree
void printTree(struct node*);

//Returns NULL if inserting a duplicate key, else returns root node of tree.
struct node *insertNode(struct node*, int);

//Returns NULL if deleting a non-existent key, else returns root node of tree.
struct node *deleteNode(struct node*, int);
