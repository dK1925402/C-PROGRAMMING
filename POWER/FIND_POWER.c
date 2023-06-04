//FIND_POWER


#include <stdio.h>
#include<math.h>
int main() {
   int a,b,c;
   
    printf(" ENTER NO .");
    scanf("%d",&a);
    printf(" ENTER POWER OF NO. %d^",a);
    scanf("%d",&a);
    c=pow(a,b);

    printf("  %d ^ %d  =  %d ",a,b,c);

    return 0;
}