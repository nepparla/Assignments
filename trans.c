#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m],i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
           b[i][j]=a[j][i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        printf("%d\t",b[i][j]);
        printf("\n");
    }
    return 0;
}