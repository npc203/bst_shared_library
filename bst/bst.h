struct node {
  int key;
  struct node *left, *right;
};

struct node *createRoot(int);
void printTree(struct node*);
struct node *insert(struct node*, int);
struct node *deleteNode(struct node*, int);