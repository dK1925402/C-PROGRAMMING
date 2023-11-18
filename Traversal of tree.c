#include <stdio.h>
#include <stdlib.h>



struct node {
int data ;
struct node * right;
struct node * left ;

};


// this function helps for create a newnode :
 struct node * newnode ( int data ){

 struct node * node = (struct node *)malloc (sizeof(struct node ));
 node-> data = data;
 node -> right = NULL;
 node-> left = NULL; 
 
 return node ;
}

 /*traversal in binary tree

there are three types of traversal in binarytree:
1. preorder traversal
root-> left subtree -> right subtree 

2. postorder traversal
left subtree -> right subtree -> root 

3. inorder traversal
left subtree -> root -> right subtree */


//preorder function 
void preorder(struct node *node){
  if ( node !=NULL){
    printf( "%d ",node ->data );
    preorder(node ->left );
    preorder(node -> right );
  }
}

//postorder function 
void postorder(struct node *node){
if ( node !=NULL){
    postorder(node ->left );
    postorder(node -> right );
    printf( "%d ",node ->data );
  }
}

//inorder function 
void inorder(struct node *node){
  if ( node !=NULL){
    inorder(node ->left );
    printf( "%d ",node ->data );
    inorder(node -> right );
    
  }
}



int main() {


//create the nodes 
struct node* n =newnode(5);
struct node *n1 =newnode(9);
struct node *n2 =newnode(4);
struct node *n3 =newnode(3);
struct node *n4 =newnode(1);



    /*   

    structure of tree :

                    5
                  /   \
                9       4
              /   \
            3       1                     */


//links the nodes 
n-> left = n1;
n->right = n2;
n1->left = n3;
n1 -> right = n4;


//Call the functions
printf("PREORDER TRAVERSAL :  ") ; 
preorder(n);

printf("\n\n") ;

//Call the functions
printf("POSTODRER TRAVERSAL :  ") ; 
postorder(n);

printf("\n\n") ; 

//Call the functions
printf("InODRER TRAVERSAL :  ") ; 
inorder(n);
  
  
  
  return 0;
}
