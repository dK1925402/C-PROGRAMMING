
//find the sum of n natural no.

#include <stdio.h>

int main() {
    int a, b, c;
    printf("ENTER YOUR N NUMBER : ");
    scanf("%d", &a);
  
    for (c=1;c<=a;c++){
        b=c+b;
        }
   printf("THE SUM OF N NATURAL NO. IS %d",b);
        
    return 0;
}
