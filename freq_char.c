#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    gets(s);
    int l,i,j,k;
    l=strlen(s);
    int a[l];
    a[0]=0;
    for(i=1;i<l;i++)
    {
        a[i]=0;
        for(j=0;j<i;j++)
        {
            if(s[i]==s[j])
            a[i]++;
        }
    }
    int max=a[0];
    for(i=0;i<l;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        k=i;
        }
    }
    printf("%c:%d",s[k],max+1);
}