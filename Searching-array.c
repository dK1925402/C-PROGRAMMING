 #include<stdio.h>

    int main()
{
    int i, a[10], s, x = 12, y = 13;

    printf("**--- SEARCHING OF ARRAY ---**\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("ENTER YOUR %d INPUT :- ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n\nSEARCH YOUR INPUT :- ");
    scanf("%d", &s);

    for (i = 0; i < 10; i++)
    {
        if (s == a[i])
        {
            printf("\n**** YOUR INPUT IS FIND SUCESSFULLY **** ");
            printf("\nLOCATION OF a[%d]=%d", i + 1, s);
            printf("\nADDRESS OF IS a[%d] = %d", i + 1, &a[i]);
            x = y; // its for trick
        }
    }
    if (x != y)
    {
        printf("\n**** YOUR INPUT %d IS NOT FOUND ****", s);
    }

    return 0;
}