#include<stdio.h>
int main()
{
    int n,i,l,s=0,temp;
    scanf("%d",&n);
    int a[100];
    temp=n;
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    l=i;
    int b[l];
    for(i=0;i<l;i++)
    {
       
        if(a[i]==0)
        b[i]=1;
        else
        b[i]=0;
    }
    printf("the number %d in binary is:",temp);
    for(i=l-1;i>=0;i--)
    printf("%d",a[i]);
    printf("\n");
    printf("the number after flipping:");
    for(i=l-1;i>=0;i--)
    printf("%d",b[i]);
}