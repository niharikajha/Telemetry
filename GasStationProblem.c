#include <stdio.h>
#include <conio.h>

struct PetrolPump{
	int Petrol;
	int Distance;
};

int printRoute ( struct PetrolPump * Array, int n)
{
	int start =0;
	int end = 1;
	int curr_petrol = Array[start].Petrol - Array[start].Distance;
	
	while ((end != start)||(curr_petrol < 0))
	{
		while ((start!= end)&&(curr_petrol <0))
		{
			curr_petrol -= Array[start].Petrol - Array[start].Distance;
			start = (start+1)%n;
			if (start == 0)
			{
				return -1;
			}
		}
		
		
		curr_petrol +=Array[end].Petrol -Array[end].Distance;
		end = (end+1)%n;
		
	}
	return start;
	
}
int main (void)
{
	struct PetrolPump Array[] = {{6,4},{3,6},{7,3}};
	int start = printRoute(&Array[0],3);
	((start == -1)?printf("No Solution \n"):printf("Start = %d \t"),start); 
	return 0;
}
