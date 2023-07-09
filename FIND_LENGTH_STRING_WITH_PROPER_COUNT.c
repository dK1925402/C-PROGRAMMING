//FIND_LENGTH_STRING_WITH_PROPER_COUNT

#include<stdio.h>
#include<string.h>

int main(){

raftar:   // USE FOR GOTO STATEMENT 

printf("NOTE : PLEASE USE (_) FOR SPACE\n\n");
    
char a[100];
printf("Enter your string : ");
scanf("%s",&a);

int i=strlen(a); //i == LENGTH OF STRING 

for(i;i>=0;i--){
    
if (a[i]=='_'){  // USE FOR REMOVE COUNT OF (_) ;
int j = strlen(a)-1;
printf("The lenght of string is : %d\n\n\n",j);
    
goto raftar;  /*USE FOR REMOVE PRINT OF ELSE FUNCTION */ }}

if (NULL){ } // USE FOR USE ELSE FUNCTION BECAUSE WITHOUT IF FUNCTION WE CAN'T USE OF ELSE FUNCTION  ||  OTHER IF FUNCTION UNDER THE FOR LOOP THEREFORE USE NEW IF NULL FUNCTION  

else{
int j= strlen(a);
printf("The lenght of string is : %d\n\n\n",j);
 
goto raftar;   }

return 0;   }