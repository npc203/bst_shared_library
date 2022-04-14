#include<stdbool.h>
struct node {
  int key;
  struct node *left, *right;
};
struct pair{
  bool found;
  struct node* node;
};
void printTree(struct node*);
struct node *insert(struct node*, int);
struct pair deleteNode(struct node*, int);
