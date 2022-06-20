#include<stdio.h>
int gcd(int a,int b)
{
	int j,m;
	for(j=1;j<=a && j<=b;j++){
		if(a%j==0 && b%j==0)
		m=j;
	}
	return m;
}
int main()
{
	int n,g;
	 scanf("%d",&n);
	 int a[n],i;
	 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 g=a[0];
	 for(i=0;i<n;i++)
		 	g=gcd(g,a[i]);
	printf("%d",g);
}