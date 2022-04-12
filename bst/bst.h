#include<stdbool.h>

struct node {
  int key;
  struct node *left, *right;
};

struct node *createRoot(int);
void printTree(struct node*);
struct node *insert(struct node*, int);
bool deleteNode(struct node*, int);