#include<stdio.h>
int main()
{
    int n,m,*p,*q,a[10],b[10],i,j;
    printf("enter the size of array1:");
    scanf("%d",&n);
    printf("enter elements of array1:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the size of array2:");
    scanf("%d",&m);
    printf("enter elements of array2:");
    for(j=0;j<m;j++)
    scanf("%d",&b[j]);
    p=a;
    q=b;
    for(i=0,j=n;i<m;j++,i++)
    *(p+j)=*(q+i);
    for(i=0;i<j;i++)
    printf("%d ",a[i]);
}