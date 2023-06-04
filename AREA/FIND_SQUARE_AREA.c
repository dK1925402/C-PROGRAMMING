// FIND_SQUARE_AREA

#include <stdio.h>
#include<math.h>
int main() {
   int a,b;
   
    printf("FIND THE AREA OF SQUARE:-\n\n");
    printf("ENTER THE SIDE OF SQUARE  : ");
    scanf("%d",&a);
    
  b=pow(a,2);

    printf("THE AREA OF SQUARE : %d",b);

    return 0;
} 