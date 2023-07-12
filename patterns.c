#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, k, c;
    system("cls");

    printf("--------------- MENU ----------------\n");
    printf("Enter 1 for TOP RIGHT Pyramid\n");
    printf("Enter 2 for TOP LEFT Pyramid\n");
    printf("Enter 3 for BOTTOM LEFT Pyramid\n");
    printf("Enter 4 for BOTTOM RIGHT Pyramid\n");
    printf("Enter 5 for UPWARD Pyramid\n");
    printf("Enter 6 for DOWNWARD Pyramid\n");
    printf("Enter 7 for DIAMOND\n");
    printf("--------------------------------------\n");

    printf("Please enter your choice: ");
    scanf("%d", &c);

    printf("Enter n: ");
    scanf("%d", &n);

    switch (c)
    {
        case 1:
            printf("The pattern is:\n");
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= i - 1; j++)
                {
                    printf(" ");
                }
                for (k = 1; k <= n - i + 1; k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 2:
            printf("The pattern is:\n");
            for (i = 1; i <= n; i++)
            {
                for (j = n - i + 1; j >= 1; j--)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 3:
            printf("The pattern is:\n");
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 4:
            printf("The pattern is:\n");
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= n - i; j++)
                {
                    printf(" ");
                }
                for (k = 1; k <= i; k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
         case 5:
            printf("The pattern is:\n");
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= n - i; j++)
                {
                    printf(" ");
                }
                for (k = 1; k <= 2*i-1; k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;

            case 6:
            printf("The pattern is:\n");



            case 7:
            printf("The pattern is:\n");
            for (i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
     {
        printf(" ");
    }
    for(k=1; k<=2*i-1; k++)
    {
        printf("*");
    }
    printf("\n");
}
for(i=n-1; i>=1; i--)
{
    for(j=1; j<=n-i; j++){
        printf(" ");
    }
    for(k=2*i-1; k>=1; k--)
    {
        printf("*");
    }
    printf("\n");
}

            


        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
