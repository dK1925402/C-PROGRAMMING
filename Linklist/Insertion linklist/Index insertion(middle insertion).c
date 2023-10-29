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



// Function for insert node in given index place
struct node * insertinIndex(struct node*head ,int index,int data )
{
    struct node * ptr = (struct node*) malloc (sizeof (struct node));
    struct node * p = (struct node*) malloc (sizeof (struct node));

    p = head ;
    int i = 1;
    while (i<=index-1) {
        p = p-> link ;
        i++;
    }

    ptr -> link = p->link;
    p-> link = ptr ;
    ptr-> data = data;


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

    // call function for insert the node according to index no. 
    insertinIndex(head,2, 100);


    printf("\n\nAfter linklist :\n");
    printlinkedlist(head);


    return 0;
}