#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char * RemoveSpaces(char * string)
{
	int length =0;
	for (length = 0 ; string[length] != '\0'; ++length);
	int i,j,count;
	printf("%d \t", length);
	for (i = 0; i <=length ; i++)
	{
		if (string[i] == ' ')
		{
			count++;
		}
	}
	char stringtobereturned[length - count];
	for (i = 0; i <=length ; i++)
	{
		if (string[i] == ' ')
		{
			
		}
		else
		{
			stringtobereturned[j] = string[i];
			j++;
		}
	}
	printf("String to be returned is %s", stringtobereturned);
	return(stringtobereturned);	
}

int main (void)
{
	char string[1000];
	char * newstring;
	int length;
	printf("Enter the string:");
	gets(string);	
	int char_set[128] = {0};
	int i,val,isodd;
	newstring = RemoveSpaces(string);
	for (length = 0; newstring[length] != '\0'; ++length);
	for (i = 0; i <= length; i++)
	{
		val = char_set[newstring[i]];
		char_set[newstring[i]] = val++;
	}
	i =0;
	for (i =0; i <=128; i++)
	{
		if ((char_set[i]!= 0)&&(char_set[i]%2 == 0))
		{
			isodd++;
		}
	}
	if (isodd%2)
	{
		printf("String is  a permutation pallindrome");
	}
	else
	{
		printf("String is not a permutation pallindrome");
	}
	return(0);	
}
