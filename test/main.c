#include<stdio.h>
#include"bst.h"


int main(){
    struct node *root = NULL;
    root = insert(root,8);
    root=insert(root,3);
    root=insert(root,1);

    inorder(root);

    return 0;
}
