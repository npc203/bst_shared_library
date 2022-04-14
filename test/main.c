#include<stdio.h>
#include"bst.h"
#include<stdbool.h>
int main(){
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
            	root=insert(root,e);
            	printf("Sucessfully Inserted!!\n");
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
                struct pair result=deleteNode(root,e);
                root=result.node;
                if(result.found==true){
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
}
