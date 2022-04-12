#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
#include<stdbool.h>

void inorder(struct node*);

struct node *createNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

void printTree(struct node *root) {
  inorder(root);
}

void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d  ", root->key);
    inorder(root->right);
  }
}


struct node *insert(struct node *node, int key) {
  if (node == NULL) return createNode(key);
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

struct node *minValueNode(struct node *node) {
  struct node *current = node;
  while (current && current->left != NULL)
    current = current->left;

  return current;
}

int search(struct node *root,int key){
   struct node *current = root;
   while(current->key != key){
	
      if(current != NULL) {
         if(current->key > key){
            current = current->left;
         }
         else {                
            current = current->right;
         }
	
         if(current == NULL){
            return false;
         }
      }			
   }
   
   return true;
}

struct node *delete(struct node *root, int key) {
  if (root == NULL) return root;
  if (key < root->key)
    root->left = delete(root->left, key);
  else if (key > root->key)
    root->right = delete(root->right, key);
  else {
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }
    struct node *temp = minValueNode(root->right);
    root->key = temp->key;
    root->right = delete(root->right, temp->key);
  }
  return root;
}

struct node *deleteNode(struct node *root, int key) {
  if(search(root,key)){
     delete(root,key);
     return true;
  }
  else{
     return false;
  }
}


