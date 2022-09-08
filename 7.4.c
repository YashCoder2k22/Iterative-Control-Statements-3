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
    printf("Hcf is %d",H);
    return 0;
}