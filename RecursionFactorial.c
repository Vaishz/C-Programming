#include<stdio.h>

int fact(int n)
{
    int result;
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        result = n * fact(n - 1);
        return result;
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int result = fact(n);
    printf("Factorial is %d\n", result);
}

