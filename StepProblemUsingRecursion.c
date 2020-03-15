/* A child is running up a staircase with n steps
and can hop either 1 step , 2 steps or 3 steps
Implement a method to count how many possible ways
the child can run up the stairs*/
#include <stdio.h>
unsigned int CountWays( unsigned int n)
{
	if ((n== 1)||(n == 0))
	{
		return(1);
	}
	else if(n == 2)
	{
		return(2);
	}
	else
	{
		return(CountWays(n-1)+CountWays(n-2)+CountWays(n-3));
	}		
	
}
int main (void)
{
	unsigned int n, result;
	printf("Please Enter the total number of steps");
	scanf("%d", &n);
	result = (CountWays(n));
	printf("Result is %d", result);
}
