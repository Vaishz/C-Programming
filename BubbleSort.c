//Write a Program to Sort the array in ascending order using Bubble sort

#include<stdio.h>

void sort(int a[],int n)
{
    int i,j,t;
    for (i=1; i<=n; i++)
    {
        for(j=i+1; j<=n-1-i; j++)
        {
            if (a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
int main()
{
    int a[50],i,n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
    printf("Enter element: \n");
    scanf("%d" , &a[i]);
    }
    sort(a,n);
    printf("Elements after sort are \n");
    for (i=1; i<=n; i++)
    {
    printf("%d \n", a[i]);

}
}
