#include<stdio.h>
int main()
{
    int a,b,i,j,min,max,count=0;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    max=a>b?a:b;
    for(i=min;i<=max&&i>=min;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }    
        }
        if(count==2)
        {
            printf("%d ",i);
        }
    }
}