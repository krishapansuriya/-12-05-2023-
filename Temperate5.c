#include<stdio.h>
main()
{
	int n,a,rev,i=0;
	printf("Enter any number:-");
	scanf("%d",&n);
	rev=n;
	while(n>0)
	{
		a=n%10;
		i=a+(i*10);
		n=n/10;
	}
	if(rev==i)
	{
		printf("Your number is palindrome number");
	}
	else
	{
		printf("Your number is not palindrome number");
	}
}
