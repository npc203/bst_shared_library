#include<stdio.h>
#include<stdbool.h>
#include <dlfcn.h>
#include<stdlib.h>
#include"bst.h"

int main(){

    void *handle;
    void (*printTree)(struct node*);
    struct node *(*insertNode)(struct node*, int);
    struct node *(*deleteNode)(struct node*, int);

    char *error;

    handle = dlopen ("/usr/lib/libbst.so", RTLD_LAZY );
    if (!handle) {
        fputs (dlerror(), stderr);
        exit(1);
    }

    insertNode = dlsym(handle, "insertNode");
    printTree = dlsym(handle, "printTree");
    deleteNode = dlsym(handle, "deleteNode");
    if ((error = dlerror()) != NULL)  {
        fputs(error, stderr);
        exit(1);
    }

    struct node *root = NULL;
    enum OPERATIONS{Insert=1,Delete,Print,Empty,Exit};
    int c;char s[20];
    do{
       printf("Choices 1.Insert 2.Delete 3.Print 4.Empty 5.Exit\n");
       fseek(stdin,0,SEEK_END);
       if(scanf("%d",&c)){
	}
       else{
           printf("INVALID CHOICE\n");
           fgets(s,20,stdin);
           continue;
       }
       switch(c){
        case Insert:{
            printf("Enter the value: ");
            int e;
            fseek(stdin,0,SEEK_END);
            if(scanf("%d",&e)){
            	struct node *result=insertNode(root,e);
                if(result!=NULL){
                    root=result;
            	    printf("Sucessfully Inserted!!\n");
                }else
                    printf("Duplicate Element!!!\n");
            }
            else{
            	printf("INVALID!!\n");
            	fgets(s,20,stdin);
            }
            break;
        }
        case Delete:{
            printf("Enter the value to be deleted: ");
            int e;
            fseek(stdin,0,SEEK_END);
            if(scanf("%d",&e)){
                if(root==NULL){
                    printf("Tree is empty\n");
                    break;
                }
                if(e==root->key){
                    if(root->left==NULL && root->right==NULL){
                        deleteNode(root,e);
                        root=NULL;
                        printf("Sucessfully Deleted!!\n");
                        break;
                    }
                }
                struct node *result=deleteNode(root,e);
                
                if(result!=NULL){
                    root=result;
                    printf("Sucessfully Deleted!!\n");
                }
                else{
                    printf("Not Found!!\n");
                }
            }
            else{
            	printf("INVALID!!\n");
               fgets(s,20,stdin);
            }
            break;
        }
        case Print:{
            printf("\nInOrder traversal of BST: ");
            printTree(root);
            printf("\n");
            break;
        }
        case Empty:{
            root==NULL?printf("Tree is Empty!!\n"):printf("Tree is NOT Empty!!\n");
            break;
        }
        case Exit:{
            break;
        }
        default:{
            printf("Wrong Choice!!\n");
            break;
        }
       }
    }while(c!=5);
    dlclose(handle);
}
