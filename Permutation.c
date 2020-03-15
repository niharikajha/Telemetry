#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char * bubblesort (char *string)
{

	int i;
	int j;
	int k;
	for (k =0; string[k] != '\0'; ++k);
	char temp;
	for (j = 0; j <= k ; j++)
	{
		for (i =0; i <= k; i++)
		{
			if (string[i+1] > string[i])
			{
				temp = string[i];
				string[i]= string[i+1];
				string[i+1] = temp;
			}		
		} 
		
	}
	printf("Sorted String is %s \n",string);
	return(string);
}
bool IsPermutation( char *string1, char *string2)
{
	char * sortedstring1 = bubblesort(string1);
	char * sortedstring2 = bubblesort(string2);
	for (count =0; count <strlen(sortedstring1); count++)
	{
		if (sortedstring1[count]!=sortedstring2[count])
		{
			return(false);
		}
	}
	return(true);
}

int main (void)
{
	char  string1[1000]; 
	char  string2[1000];
	bool Result;
	printf("Enter First String:");
	scanf (" %s", &string1);	
	printf("Enter Second String:");
	scanf (" %s", &string2);
	Result = IsPermutation(string1,string2);
	if (Result)
		{
			printf("%s and %s are permutations of each other", &string1, &string2);
		}
		else
		{
			printf("%s and %s are  of same length but not permutations", &string1, &string2);
		}
	return(0);
}
