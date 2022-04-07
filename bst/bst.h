struct node {
  int key;
  struct node *left, *right;
};
struct node *newNode(int);
void inorder(struct node*);
struct node *insert(struct node*, int);
struct node *minValueNode(struct node*);
struct node *deleteNode(struct node*, int);