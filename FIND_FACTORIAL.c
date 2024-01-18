
#include <stdio.h>

int main() {
 
 // declare variables
int num , fact = 1 ;

//input from user 
printf("Enter your no. : ");
scanf("%d",&num);

printf("\n\nprocessing.....\n\n");

for(int i=1 ; i<=num;i++){
     
     fact = fact *i ;
}

printf("Factorial of %d is %d",num,fact);

    return 0;
}

