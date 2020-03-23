#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void swap (int * a, int * b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void Transpose (int  array[4][4], int rows, int col)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j =0; j < col; j++)
		{
			printf (" Swapping %d with %d \n",array[i][j], array[j][i] );
			swap (&(array[i][j]), &(array[j][i]));
			printf (" Swapped %d with %d \n",array[i][j], array[j][i] );
		}
	}
}

void ReverseColumns (int  array[4][4], int col)
{
	int i,j,k;
	for (i =0; i <= col-1; i++)
	{
		for (j=0,k=col-1;j<k; j++,k--)
		{
			swap(&array[j][i],&array[k][i]);
		}

	}	
}

void printMatrix (int array[4][4], int R, int C)
{
	int i , j ;
	for (i = 0; i <R; i++)
	{
		for (j = 0; j< C; j++)
		{
			printf(" %d \t", array[i][j]);
		}
		printf ("\n");
	}
}
int main (void)
{
	int arr[4][4] = {{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12	},
	{13,14,15,16}
	};
	printMatrix (arr, 4, 4);
	Transpose (arr,4, 4);
	ReverseColumns (arr,4);
	printMatrix(arr, 4, 4);
	return 0;
}
