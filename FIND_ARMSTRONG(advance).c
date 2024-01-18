#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    
    // declare variables  
    int copy,arm;   // arm means armstrong 
    char num[10];

// input from user
    printf("Enter your no. : ");
    scanf("%d", &copy);

    // Convert the integer to a string
    snprintf(num, sizeof(num), "%d", copy);

// find the lenght of string
    int length = strlen(num);
    
    for(int i = 0; i<length; i++){
        int j = num[i] - '0';// convert character into integer
        int cube =pow (j,3);
        arm = arm + cube;
    }

 printf("\n\nprocessing....\n\n");

if(copy == arm){
    printf("-- %d it is an Armstrong no. --",copy);
}
else {
    printf("-- %d it is not an Armstrong no. --",copy);
}

    return 0;
}
