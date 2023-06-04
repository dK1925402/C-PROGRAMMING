// find squareroot

#include <math.h>
#include <stdio.h>

int main() {
    float a, k;

    printf("ENTER YOUR NO.: ");
    scanf("%f", &a);

    k = sqrt(a);
    printf("The square root of %.2f is %.2f\n", a, k);
    
    return 0;
}


