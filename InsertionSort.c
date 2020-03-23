#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef unsigned int uint;

void InsertionSort (uint Array[], int n)
{
	int i, j, key =0;
	for (i = 1; i<n ;i++)
	{
		j = i-1;
		key = Array[i];
		while((j>=0)&&(Array[j]>key))
		{
			Array[j+1] = Array[j];
			j = j-1;
		}
		Array[j+1] = key;
	}

}

int main (void)
{
	uint arr[10]={25,78,190,34,18,77,55,65,44,20};
	printf("%d is the size of the array\n",sizeof(arr)/sizeof(arr[0]));
	InsertionSort(&arr[0], sizeof(arr)/sizeof(arr[0]));
	int i =0;
	printf("Sorted array is \n:");
	for (i = 0; i< 10; i++)
	{
		printf("%d \t",arr[i]);
	}
	return 0;
}
