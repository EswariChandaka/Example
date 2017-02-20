#include<stdio.h>
//array left rotation
main()
{
	int i,n,ni,d;
	printf("no of elts in array:");
	scanf("%d",&n);
	printf("left elts rotation:");
	scanf("%d",&d);
	int a[n],ar[n];
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nafter left rotation:");
	for(i=0;i<n;i++)
	{
		ni=(i+d)%n;
		ar[i]=a[ni];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",ar[i]);
	}
}
