
#include <stdio.h>
#include <string.h>
int main() {
 
 // declare variables
char num[10],number[10];

int j,k=0;

  // input from user 
printf("Enter your no. : ");
scanf("%s",&num);

  // find length of the string
int length = strlen(num);
int temp = length ;

printf("\n\nprocessing.....\n\n");

//(for loop) for store the reverse string in new array 
for( j=0 ; j<length;j++){
temp = temp -1;
number[temp]=num[j];
}


  // Match the both of array if both all array match then k = length ,else any value is not match then k= 0
   for(j=0 ; j<length;j++) { 
       
       if (num[j] == number[j]){
          k++ ;
     }
       else{ k=0;}
    
}

  

  if (k==length){
         printf("It is a palindrome no.");
     }
     
     else {
          printf("It is not a palindrome no.");
     }

    return 0;
}
/// khatam 
