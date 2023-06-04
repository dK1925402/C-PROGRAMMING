//MAGICAL-PROGRAMS

#include<stdio.h>
int main (){
    int a,b,c,d;
    
    printf("think Any to 2 digit number\nExample 45,96,35,93 etc..\n\n");
    
    printf("Add this number\nif you have choose 45 so add (4+5)=9\n\n");
    printf("New no. subtract from orignal no.\nExample 45-9=36\n\n");
    printf("THE RESULT OF SUBTRACT ,ENTER ANY NO. FROM THIS \n EXAMPLE RESULT 36 \n\nENTER NO. 3 OR 6\nENTER :  ");
   
    scanf("%d",&a);

    b=9-a;
    c=a*10+b;
    d=b*10+a;
    printf("\n\nyour no. is %d OR %d ",c,d);
}


