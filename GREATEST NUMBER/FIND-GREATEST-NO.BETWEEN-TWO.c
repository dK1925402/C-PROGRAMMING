//FIND-GREATEST-NO.BETWEEN-TWO

#include<stdio.h>
int main (){
    int a,b,c;
    

    
    printf("ENTER FIRST NO.");
    scanf("%d",&a);
    printf("ENTER SECOND NO.");
    scanf("%d",&b);
  
    
    if(a>b){
             printf("%d IS GREATER THAN %d",a,b);
    }
    else if(a==b){
             printf("BOTH ARE EQUALS");
}
    else if(a<b){
           printf("%d IS GREATER THAN %d",b,a);
    }
    
     
}