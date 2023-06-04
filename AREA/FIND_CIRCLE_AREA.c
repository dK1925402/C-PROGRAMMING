// FIND_CIRCLE_AREA

#include <stdio.h>
#include<math.h>
int main() {
   int a,b;
   
    printf("FIND THE AREA OF CIRCLE:-\n\n");
    printf("ENTER RADIUS OF CIRCLE : ");
    scanf("%d",&a);
    
  b=2*3.14*(pow(a,2));

    printf("THE AREA OF CIRCLE : %d",b);

    return 0;
} 
