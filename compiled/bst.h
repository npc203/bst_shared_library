#include<stdbool.h>
struct node {
  int key;
  struct node *left, *right;
};

void printTree(struct node*);
struct node *insertNode(struct node*, int);
struct node *deleteNode(struct node*, int);
