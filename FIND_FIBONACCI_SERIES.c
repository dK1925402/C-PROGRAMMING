//FIND FIBONACCI SERIOUS

#include <stdio.h>

int main() {
    int a, b, c;
   
  printf("ENTER THE FIRST NO. IN FIBONACCI SERIOUS : ");
    scanf("%d", &a);  
  printf("ENTER THE SECOND NO. IN FIBONACCI SERIOUS : ");
    scanf("%d", &b);  
  printf("THE FIBONACCI SERIOUS IS : ");
  
  for(a;a<=1000000;) { 
    c=a+b;
    a=b;
    b=c;
  printf("%d ,",c);}  
  
   return 0;
}
