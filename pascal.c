#include<stdio.h>
int fact(int a)
{
    if(a==1||a==0)
    return 1;
    else
    return a*fact(a-1);
}
int main()
{
    int n,i,j,m,k;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        m=n-i;
        for(k=0;k<m;k++)
        printf(" ");
        for(j=0;j<=i;j++)
            printf("%d ",fact(i)/((fact(i-j))*fact(j)));
        printf("\n");
    }
}