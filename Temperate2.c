#include<stdio.h>
main()
{
	int i=1,mul,n;
	printf("Enter number:-");
	scanf("%d",&n);
	for(i<=n;i<=10;i++)
	{
		mul=n*i;
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
