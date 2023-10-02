#include<stdio.h>

int main()
{

    printf("\n\n---- BINARY SEARCH ----\n\n");

    int i,multi=5,a[1000];  // i use for - for loop  ; multi use for fill value in array
    int j,s; // j use in end in if condition for ELEMENT IS NOT FOUND ; s means search
    int low =0 ,high=(sizeof(a)/4)-1;
    int mid =(low+high)/2;

// this for loop use for fill value in array
    for (i=0; i<1000; i++) {
        a[i]= multi*i;
    }

// input from user for Search
    printf("Search : ");
    scanf("%d",&s);
    printf("\n");



//this for loop binary search
    for (i=0; i<100; i++) {

// if a[low] equal to search then print
        if(s==a[low]) {
            printf("\n\n TIME COMPLEXITY : %d times loops is RUN\n\n",i+1);
            printf("**** ELEMENT IS FOUND IN A[%d] ****",low);
            j=5;
            break;
        }


// if a[mid] equal to search then print
        if(s==a[mid]) {
            printf("\n\n TIME COMPLEXITY : %d times loops is RUN\n\n",i+1);
            printf("**** ELEMENT IS FOUND IN A[%d] ****",mid);
            j=5;
            break;
        }


// if a[high] equal to search then print
        if(s==a[high]) {
            printf("\n\n TIME COMPLEXITY : %d times loops is RUN\n\n",i+1);
            printf("**** ELEMENT IS FOUND IN A[%d] ****",high);
            j=5;
            break;
        }

//  this use if search smaller than a[mid] then (high = mid-1)   //-1 use for because mid already checked therefore before mid no. equal to high
        else if(s<a[mid]) {
            high=mid-1;
            mid =(low+high)/2;
        }

//  this use if search is greater than a[mid] then (low=mid+1)   //+1 use for because mid already checked therefore mid no. equal to low
        else if(s>a[mid]) {
            low=mid+1;
            mid =(low+high)/2;
        }

    }

    if(j!=5) {
        printf("//*** ELEMENT IS NOT FOUND ***//");
    }

    return 0;
}