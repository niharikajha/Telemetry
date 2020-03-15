/*Finding magic index where A[i] = i*/
/*Finding and showing peak values*/
#include <stdio.h>
typedef unsigned int uint;
uint BinarySearch(uint * ArrayToSearch, uint start, uint end)
{
    if(end < start)
	{
		return(0);	
	}
	int mid = (end + start)/2;
	if (ArrayToSearch[mid]== mid)
	{
		return(mid);		
	}
	else
	{
		if (ArrayToSearch[mid]> mid)
		{
			printf("Entering this loop with arguments %d %d %d", *ArrayToSearch, mid+1,end);
			return(BinarySearch(ArrayToSearch, mid+1,end));
		}
		else
		{
			printf("Entering this loop with arguments %d %d %d", *ArrayToSearch,start,mid -1);
			return(BinarySearch(ArrayToSearch, start,mid -1));	
		}
	}
	return(0);	
}
uint PeakSearch(uint * ArrayToSearch, uint start, uint end)
{
    if(end < start)
	{
		return(0);	
	}
	int mid = (end + start)/2;
	if ((ArrayToSearch[mid] > ArrayToSearch[mid -1])&&(ArrayToSearch[mid] < ArrayToSearch[mid +1]))
	{
		printf("Peak %d at %d",mid, ArrayToSearch[mid] );
		return(mid);		
	}
	else
	{
		if (ArrayToSearch[mid-1]> ArrayToSearch[mid])
		{
			return(PeakSearch(ArrayToSearch, mid+1,end));
		}
		else
		{
			return(PeakSearch(ArrayToSearch, start,mid -1));	
		}
	}
	return(0);	
}
int main (void)
{
	int Array[10] = { -40,-20, -1, 1,2,5,7,9,12,22};
	int PeakArray[10] = { 20, 30, 17, 50,10, 15, 2, 23, 90, 67};
	printf("Magic Index is %d", BinarySearch(&Array[0],0,10));
	PeakSearch(&PeakArray[0],0,10);
	return(0);
}
