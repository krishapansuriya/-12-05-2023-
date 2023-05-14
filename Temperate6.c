#include<stdio.h>
main()
{
	int i,fac,n;
	printf("Enter number:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("%d",fac);
}
