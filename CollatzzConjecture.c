#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter n: ");
    scanf("%d", &n);
while(n!=1)
{
    if (n%2==0)
    {
        n=n/2;
        i++;
        printf("%d \n",n);
    }
    else
    {
        n=(n*3)+1;
        i++;
        printf("%d \n",n);
    }
}
printf("Number of iterations are: %d", i);
return 0;
}
