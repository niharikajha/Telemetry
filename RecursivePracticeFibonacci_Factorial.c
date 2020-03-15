#include <stdio.h>
#include <stdlib.h>

unsigned int factorial (unsigned int n)
{
	if (n == 0)
	{
		return 1;
	}
	return(n* factorial(n-1));
}
unsigned int fibonacci (unsigned int n)
{
	if ((n == 0)||(n==1))
	{
		return 1;
	}
	return(fibonacci(n-1) + fibonacci(n-2));
}
int main(void)
{
	unsigned int n;
	printf("Enter the number for which factorial needs to be calculated:");
	scanf("%d",&n);
	printf("%d \n",factorial(n));
	printf("%d \n",fibonacci(n));
	return(0);
}
