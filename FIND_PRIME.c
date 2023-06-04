// FIND PRIME OR NOT
#include <stdio.h>

int main() {
    int a,b,c;
 printf("ENTER YOUR NO. : ");
 scanf("%d",&a);
    b=a+1;
    c=a-1;
    if (a==2&&3&&5){
         printf("%d is a Prime no.",a);
    }
  
    else if (b % 6==0 || c % 6==0){
    printf("%d is a Prime no.",a);
        } 
    else{
        printf("%d is not a Prime number ",a);}    
        
    return 0;
}



