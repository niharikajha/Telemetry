#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef unsigned int uint;
void swap_integers (uint *a, uint *b)
{
	uint temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void * BubbleSort (uint arraymember[], int n)
{
//	int sizeofarray = sizeof(arraymember)/sizeof(arraymember[0]);
	int i , j=0;
//	printf("The size of array is %d \n", sizeofarray);
	for (i = 0; i < n-1; i++)
	{
		for (j =0; j <(n-1 - i); j++)
		{
			if(arraymember[j] > arraymember[j +1])
			{
				swap_integers(&arraymember[j], &arraymember[j+1]);
			}
		}
	}
	
}

int main (void)
{
	uint arr[10]={25,78,190,34,18,77,55,65,44,20};
	printf("%d is the size of the array\n",sizeof(arr)/sizeof(arr[0]));
	BubbleSort(&arr[0], sizeof(arr)/sizeof(arr[0]));
	int i =0;
	printf("Sorted array is \n:");
	for (i = 0; i< 10; i++)
	{
		printf("%d \t",arr[i]);
	}
	return 0;
}
