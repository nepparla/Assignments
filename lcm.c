#include<stdio.h>
int lcm(int a,int b)
{
	int max;
	max=(a>b)?a:b;
	while(1){
		if(max%a==0&&max%b==0)
		return max;
		max++;
	}
}
int main()
{
	int n;
	 scanf("%d\n",&n);
	 int a[n],i,max,l;
	 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 l=a[0];
	for(i=0;i<n;i++)
	   l=lcm(l,a[i]);
	printf("%d",l);
}