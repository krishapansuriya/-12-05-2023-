#include<stdio.h>
main()
{
	int n,i,che=0;
	printf("Enter any number:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    if(n%i==0)
		{
			che++;
		}	
	} 
	if(che==2)
	{
		printf("Your number is prime number.");
	}
	else
	{
		printf("Your number is not prime number.");
	}
}






