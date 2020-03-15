/* A robot can only move in 2 directions right and down. It is placed in the leftmost
corner of a grid R*C size. Design an algorithm to find a path for the robot from
the top left to the bottom right (using Recursion and Dynamic Programming). (Without Obstacle)
(With Obstacle)*/
#include <stdio.h>
unsigned int NumberOfUniquePaths (unsigned int m, unsigned int n)
{
	if ((m ==1)||(n==1))
	{
		return(1);
	}
	return (NumberOfUniquePaths(m-1,n)+ NumberOfUniquePaths(m,n-1));
}
unsigned int NumberofPaths (unsigned int m , unsigned int n)
{
	unsigned int count[m][n];
	int i, j=0;	
	for (i = 0; i< m; i++)
	{
		for (j = 0; j< n ; j++)
		{
			count[i][j] =0 ;			
			printf("%d \t",count[i][j]) ;
		}
		printf("\n");
	}	
	for (i =0; i<m; i++)
	{
		count[i][0] = 1;
	}
	for (j = 0; j< n ; j++)
	{
		count[0][j] = 1;
	}
	printf("The matrix looks like \n");
	for (i = 0; i< m; i++)
	{
		for (j = 0; j< n ; j++)
		{			
			printf("%d \t",count[i][j]) ;
		}
		printf("\n");
	}	
	printf("\n");
	for (i = 0; i< m; i++)
	{
		for (j = 0; j<n ; j++)
		{
			
			count[i][j] = count[i][j-1]+count[i-1][j];
			printf("%d \t",count[i][j]) ;
		}
		printf("\n");
	}
	return(count[m-1][n-1]);
}
int main (void)
{
	unsigned int rows, columns;
	unsigned int paths;
	printf("Enter the number of rows and columns");
	scanf ("%d %d", &rows, &columns);
	paths = NumberOfUniquePaths(rows,columns);
	printf("The number of paths = %d\n", paths);
	printf("The number of paths calculated by dynamic programming are = %d", NumberofPaths(rows,columns));
}
