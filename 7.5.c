#include<stdio.h>
int main()
{
    int a,b,H,min;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    min=a>b?a:b;
    for(H=min;H>=1;H--)
    {   
        if(a%H==0&&b%H==0)
        {
            break;
        }
    }
    if(H==1)
    {
        printf("Numbers are co-prime");
    }
    else
    {
        printf("Numbers are not co-prime");
    }
    return 0;
}