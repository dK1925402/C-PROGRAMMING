
//find factorial
#include <stdio.h>

int main() {
  int a,i,j=1;
  printf("ENTER YOUR NO.");
  scanf("%d",&a);
  
  for (i=1;i<=a;i++){
      j=j*i;
  }
  printf("THE FACTORIAL IS %d",j); 
  
    return 0;
}

