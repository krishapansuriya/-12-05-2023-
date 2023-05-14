#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	printf("Enter any number:-");
	scanf("%d",&n);
	sum=n%10;
	while(n>0)
	{
		i=n%10;
		n=n/10;
	}
	sum=sum+i;
	printf("sum=%d",sum);
}
