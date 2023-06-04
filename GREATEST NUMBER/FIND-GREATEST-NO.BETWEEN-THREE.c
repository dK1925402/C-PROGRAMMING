//FIND-GREATEST-NO.BETWEEN-THREE

#include<stdio.h>
int main (){
    int a,b,c;
    
    
    
    printf("ENTER FIRST NO.");
    scanf("%d",&a);
    printf("ENTER SECOND NO.");
    scanf("%d",&b);
    printf("ENTER THIRD NO.");
    scanf("%d",&c);
    
    if(a>b&&b>c){
             printf("%d IS GREATER THAN %d , %d",a,b,c);
    }
    else if(a<b&&b>c){
             printf("%d IS GREATER THAN %d , %d",b,a,c);
}
    else if(a<b&&b<c){
           printf("%d IS GREATER THAN %d , %d",c,b,a);
    }
    
    
    // situation
    
    
     else if(a==b&&b==c){
        printf("ALL ARE EQUAL");
    }
     else if(a>b&&b==c){
        printf("%d IS GREATER THAN %d , %d",a,b,c);
    }
     else if(a>c&&b==c){
        printf("%d IS GREATER THAN %d , %d",a,b,c);
    }   
    
     else if(b>c&&a==c){
         printf("%d IS GREATER THAN %d , %d",b,a,c);
    } 
    
     else if(b>a&&a==c){
         printf("%d IS GREATER THAN %d , %d",b,a,c);
    } 
    
     else if(c>a&&a==b){
       printf("%d IS GREATER THAN %d , %d",c,b,a);
    } 
       else if(c>b&&a==b){
       printf("%d IS GREATER THAN %d , %d",c,b,a);
    } 
    
    
      // situation
     
     
      if(a==b&&b>c){
             printf("%d , %d IS GREATER THAN %d",a,b,c);
    }
    else if(a<b&&b==c){
              printf("%d , %d IS GREATER THAN %d",b,c,a);
}
    else if(a==c&&b<c){
              printf("%d , %d IS GREATER THAN %d",a,c,a);
    }
    
    
}