//Fahrenheit(°F)_TO_Celsius(°C)
#include <stdio.h>

int main() {
   int a,b;
   
    printf("Fahrenheit (°F) TO Celsius (°C) :-\n\n");
    printf("ENTER CELSIUS (°F) : ");
    scanf("%d",&a);
    
  b=(a-32)/1.8;

    printf(" %d (°F) IS EQUALL TO  : %d (°C)",a,b);

    return 0;
} 