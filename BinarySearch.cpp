#include<stdio.h>
int main()
{
	int n,i,x;
	printf("Enter size of array \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array in sorted form \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter number to be searched \n");
	scanf("%d",&x);
	int l=0,u=n-1,m,p=-1;
	while(l<=u&&p==-1)
	{
		m=(l+u)/2;
		if(x>a[m])
		l=m+1;
		else if(x<a[m])
		u=m-1;
		else
		p=m;
	}
	if(p==-1)
	printf("%d is not found",x);
	else
	printf("%d is found",x);
}
