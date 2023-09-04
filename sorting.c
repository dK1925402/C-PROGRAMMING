#include <stdio.h>

int main() {
    int i, a[10], b[10], x, y = 0, j;

    printf("ENTER YOUR 1 INPUT : ");   
    scanf("%d", &a[0]);
    
    x = a[0];

    for (i = 1; i < 10; i++) {
        printf("ENTER YOUR %d INPUT : ", i + 1);   
        scanf("%d", &a[i]);

        if (x < a[i]) {
            x = a[i];
        }
    }
   // printf("X IS %d  : ", x); 

    for (i = x; i >= 0; i--) {
        for (j = 0; j < 10; j++) {
            if (i == a[j]) {
                b[y] = a[j];
              //  printf("X IS %d  : ", x); 
             //   printf("y ,j is %d,%d\n", y, j);
                y++;
            }
        }

        if (y == 10) { 
            break;
        }
    }
    
     printf("\n\n");

    printf("YOUR INPUT IS :");
    for (i = 0; i < 10; i++) {
        printf("%d ,", a[i]);
    }
    printf("\n\n");

    printf("THE ASCENDING ORDER OF YOUR INPUT: ");
    for (i = 0; i < y; i++) { 
       
        printf("%d ,",b[i]);
    }

     printf("\n\n");

     printf("THE DESCENDING ORDER OF YOUR INPUT: ");
    for (i = 10; i >=0; --i) { 
       
        printf("%d ,",b[i]);
    }


    return 0;
}
