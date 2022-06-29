
#include<stdio.h>
int main()
{
    int n,i,j,m;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            m=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                m++;
            }
            if(m==0)
            printf("%d ",i);
        }
    }
}