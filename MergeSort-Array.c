#include<stdio.h>

//print the array
void print ( int *arr, int n)
{

    for (int i = 0 ; i < n ; i++) {
        printf("%d ,",arr[i]);

    }
}


//Merge the array
void mergesort( int *a,int *b,int *c, int m ,int n )
{


    int i ,j,k;
    i=j=k=0;


    while ( i<m && j<n) {


        if ( a[i]<b[j]) {
            c[k]= a[i];
            i++;
            k++;
        }

        else {
            c[k]= b[j];
            j++;
            k++;
        }

    }

//leftover(बचे हुए) elements print
    while ( i<m) {
        c[k]= a[i];
        i++;
        k++;
    }

//leftover(बचे हुए) elements print
    while (j<n) {
        c[k]= b[j];
        j++;
        k++;
    }



}


int main()
{

    int a[]= {5,6,9,10,15};//j//m
    int b[]= {2,8,12,19,23};//i//n

    int m = sizeof(a)/4;
    int n= sizeof(b)/4;

    int c[m+n];
    int k = m+n;



    printf("SORT ARRAY IST : ");
    print(a,m);//print SORT ARRAY IST

    printf("\n");

    printf("SORT ARRAY 2ND : ");
    print(b,n);//print SORT ARRAY 2ND


    mergesort(a,b,c,m,n);//Call function for merge the array


    printf("\n\n\n");

    printf("MERGE SORT : ");
    print(c,k);//print Merge sort array

    return 0;
}
