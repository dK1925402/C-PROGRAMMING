//MULTIPLICATION-TABLE


#include <stdio.h>

int main() {
   int a,c;
   
    printf(" ENTER NO .");
    scanf("%d",&a);
   
   for(int i=1;i<=10;i++){
       
       c=a*i;
       
         printf("%d X %d  =  %d\n",a,i,c);
   }



    return 0;
}
