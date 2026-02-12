#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,n1,count,sum,r;
    for(i=1;i<=100;i++)
    {
        n=i;
        n1=n;
        count=0;
        sum=0;

        while(n>0)
        {
            count=count+1;
            n=n/10;
        }

        n=n1;

        while(n>0)
        {
            r=n%10;
            sum=sum+pow(r,count);
            n=n/10;
        }

        if(sum==n1)
        {
            printf("%d",i);
        }
    }
    return 0;
}