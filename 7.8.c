#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    printf("Enter a Number");
    scanf("%d",&n);
    while(n)
    {
        n++;
        count=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("Next prime number is %d",n);
            break;
        }
    }
   return 0;
}



