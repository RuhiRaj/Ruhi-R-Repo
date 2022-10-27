#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter array length \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements \n");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				n--;
				for(k=j;k<n;k++)
				a[k]=a[k+1];
				j--;
			}
		}
	}
	printf("New array \n");
	for(i=0;i<n;i++)
	 printf("%d \n",a[i]);
	return 0;
}
