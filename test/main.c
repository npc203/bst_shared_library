#include<stdio.h>
#include"bst.h"


int main(){
    struct node *root = NULL;
    root = insert(root,8);
    root=insert(root,3);
    root=insert(root,1);

    printTree(root);

    deleteNode(root,3);

    printTree(root);

    return 0;
}
