#include <stdio.h>
#include<stdlib.h>


struct node {
    int data ;
    struct node * link ; // CALL TO ANOTHER STRUCT NODE
};

//Print all available data
void print(struct node *head )
{
    while (head != NULL) {
        printf("%d, ",head ->data);
        head = head -> link;
    }
}




//Delete the node according to index no.
struct node * deletionIndex(struct node *head , int index )
{

    struct node * ptr = head ;
    struct node * p = head;
    int i = 1;
    while (i != index ) {
        i++;
        ptr= ptr->link ;
    }

    struct node * q = ptr -> link ;
    ptr -> link = q->link ;
    free (q);

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

    // Call to print function for print linklist
    printf("before deletion = ");
    print(head);
    
   //call to deletionIndex function
    deletionIndex(head,2);
   
   // Call to print function for print linklist
    printf("\nAfter deletion = ");
    print(head);



    return 0;
}