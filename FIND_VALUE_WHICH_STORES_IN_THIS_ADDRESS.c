//FIND_VALUE_WHICH_STORES_IN_THIS_ADDRESS
// this prrogram helps find which data stores in address

#include <stdio.h>

int main() {
    int a=5;
  //  printf("The value of a is : %d\n",a)
    printf("The address of a is : %d\n",&a);
    
   int* b=&a; //b stores the address of a 
   
    printf("ENTER THE ADDRESS OF A FOR FIND VALUE OF A : ");
    scanf("%d",&b);
    
    int *ptr = (int *)b;  // (int*)'address'  this use for find the value which stores in this address
 
    printf("Value of 'a': %d\n", *ptr);

    return 0;
}