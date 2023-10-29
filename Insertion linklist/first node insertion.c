#include <stdio.h>
#include<stdlib.h>


struct node {
    int data ;
    struct node * link ; // CALL TO ANOTHER STRUCT NODE
};


// FUNCTION FOR PRINT DATA OF LINKED LIST
void printlinkedlist(struct node *ptr )
{
    while (ptr!= NULL) {
        printf("%d->",ptr->data);
        ptr = ptr->link ;
    }
}



// Function for insert node in first place
struct node * insertinfirst(struct node*head)
{
    struct node * ptr = (struct node*) malloc (sizeof (struct node));

    ptr-> link = head ;
    ptr-> data = 100;

    return ptr ;

}



int main()
{
    // create pointers for creates linked list nodes
    struct node *head ,*second ,*third,*fourth ;

// Provide dynamic memory to use malloc function ( IN HEAP MEMORY)
    head = (struct node*) malloc (sizeof (struct node));
    second  = (struct node*) malloc (sizeof (struct node));
    third = (struct node*) malloc (sizeof (struct node));
    fourth  = (struct node*) malloc (sizeof (struct node));


    // linked first node to second
    head -> data = 5;
    head ->link = second ;

    // linked second to third
    second -> data = 7 ;
    second ->link = third  ;

    //linked third to fourth
    third-> data = 24;
    third ->link = fourth ;


    //terminate the program to linked the NULL
    fourth-> data = 95;
    fourth ->link = NULL ;

    // call to print function
    printf("\nBefore linklist :\n") ;
    printlinkedlist(head);


   // call function for insert the node in first 
    head = insertinfirst(head);
   


    printf("\n\nAfter linklist :\n");
    printlinkedlist(head);


    return 0;
}