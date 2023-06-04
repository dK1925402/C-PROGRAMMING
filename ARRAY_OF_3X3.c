//MATRIX OF 3 BY 3

#include <stdio.h>

int main() {
    int a[3][3], b, c;
   
    for (b=1;b<=3;b++){
    for (c=1;c<=3;c++){
    printf("ENTER THE VALUE OF a[%d][%d]  :",b,c);
    scanf("%d", &a[b][c]);  }}
    printf("\n\n");
  
  
    for (b=1;b<=3;b++){
    for (c=1;c<=3;c++){
        printf("THE VALUE OF a[%d][%d]  : %d\n",b,c,a[b][c]);}}
        
        
        printf("\n");
        printf("            OR                 \n");
   
   
    for (b=1;b<=3;b++){
    for (c=1;c<=3;c++){
    printf("%d ,",a[b][c]);}
    printf("\n");                        }    
        
  
    return 0;
}
