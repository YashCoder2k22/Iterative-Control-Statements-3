#include<stdio.h>
int main()
{
    int n,x,rem,sum=0;
    printf("Enter a Number");
    scanf("%d",&n);
    x=n;
    while(n)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==x)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not a Armstrong Number");
    }
    return 0;

}