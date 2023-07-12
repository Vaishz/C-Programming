//Write a program to identify a 5 digit number which multilply by 4 generates the reverse of original number

#include<stdio.h>
void main()
{
    int i,n,p,temp,rev,rem;
    int flag=0;
    for(i=10000; i<99999; i++)
    {
        rev=0; rem=0;
        p=i*4;
        temp=p;
        while(temp!=0)
        {
            rem=temp%10;
            rev=(10*rev)+rem;
            temp=temp/10;

        }

        if(rev==i){
            flag=1;
            break;

        }
    }
    if(flag){
        printf("The number is %d ", i);
    }
}