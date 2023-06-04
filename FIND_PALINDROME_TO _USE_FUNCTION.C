//FIND PALINDROME TO USE OF FUNCTION
#include <stdio.h>

int start(int a, int b, int c, int d) {
    b = a / 100;
    c = a % 100 / 10;
    d = a % 100 % 10;
    int k = a;
    printf("%d , %d , %d\n", b, c, d);

    if (a == ((d * 100) + (c * 10) + b)) {
        printf("%d IS A PALINDROME NO.", k);
    } else {
        printf("%d IS NOT A PALINDROME NO.", k);
    }
}

int main() {
    int a, b, c, d, e;

    printf("ENTER YOUR NO.");
    scanf("%d", &a);

    if (a <= 99) {
        c = a / 10;
        d = a % 10;
        printf("%d , %d\n", c, d);

        if (a == d * 10 + c) {
            printf("%d IS A PALINDROME NO.", a);
        } else {
            printf("%d IS NOT A PALINDROME NO.", a);
        }
    } else if (a <= 999) {
        start(a, b, c, d);
    } else if (a <= 9999) {
        b = a / 1000;
        c = a % 1000 / 100;
        d = a % 1000 % 100 / 10;
        e = a % 1000 % 100 % 10;

        printf("%d , %d , %d , %d\n", b, c, d, e);

        if (a == e * 1000 + d * 100 + c * 10 + b) {
            printf("%d IS A PALINDROME NO.", a);
        } else {
            printf("%d IS NOT A PALINDROME NO.", a);
        }
    }

    return 0;
}

