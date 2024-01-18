
#include <stdio.h>
#include <string.h>
int main() {
 
 // declare variables
char num[10],number[10];

int j,k=0;

  // input from user 
printf("ENTER YOUR NO. : ");
scanf("%s",&num);

//because it is a character therefore we can't use of the operators (+.-.*,<,>) for comparing .SO we are add logic because number is smaller than 10 , yhen it is under 1 string length and other string is NULL , we choose if num[i]==NULL  . 

if (num[1]==NULL){
    printf("ERROR ! -- PLEASE ENTER THE NUMBER IS GREATER THAN 9 ");
    return 1;
}

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
         printf(" <<--- %s IS A PALINDROME NUMBER --->> ",num);
     }
     
     else {
           printf(" <<--- %s IS NOT A PALINDROME NUMBER --->> ",num);
     }


    return 0;
}
/// khatam 
