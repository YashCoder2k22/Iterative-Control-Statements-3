#include<stdio.h>
int main()
{
    int n,i,a=-1,b=1,c;
    printf("Enter a Number");
    scanf("%d",&n);
    for(i=1;1;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        {
            printf("Number found in series");
            break;
        }
        if(c>n)
        {
            printf("Number is not in series");
            break;
        }
    }
    return 0;
}

