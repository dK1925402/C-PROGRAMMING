//FIND ARMSTRONG NUMBER 
#include <stdio.h>
#include <math.h>
int main() {
  int a,b,c,d,e;
  printf("ENTER YOUR NO.");
  scanf("%d",&a);
  
  if (a<99){
      printf("%d IS NOT AN ARMSTRONG NO.",a);
  }
  
  else if (a<999){
      b=a/100;
      c=a%100/10;
      d=a%100%10;
       
    if(a==pow(b,3)+pow(c,3)+pow(d,3)){
        printf("%d IS AN ARMSTRONG NO.",a);
        }    
        else {
        printf("%d IS NOT AN ARMSTONG NO.",a);
    }
        
          }
  else if(a>999)
  {
b=a/1000;
c=a%1000/100;
d=a%1000%100/10;
e=a%1000%100%10;

if(a==pow(b,4)+pow(c,4)+pow(d,4)+pow(e,4)){
        printf("%d IS AN ARMSTRONG NO.",a);}
    else {
        printf("%d IS NOT AN ARMSTONG NO.",a);
    }    }    
        

    return 0;
}
