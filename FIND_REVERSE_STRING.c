//FIND_REVERSE_STRING 

#include<stdio.h>
#include<string.h>

int main(){
    
char dts[100];

printf("NOTE : PLEASE USE (_) FOR SPACE\n\n\n");
printf("Enter your string  :  ");
scanf("%s",&dts);

int p  = strlen(dts)-1;// -1 because array start from 0 and strlen count start from 1 therefore -1 from strlen


 
  printf("The reverse of string  is : ");
   for (p ;p>=0;p--){
       
 
       printf("%c",dts[p]);
       
      
} printf("\n\n\nONLY FOR ENTERTAINMENT PURPOSE");
 return 0; }