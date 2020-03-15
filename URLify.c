#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReplaceSpaces(char *string)
{
	int i,count =0;
	int newsize;
	int k;
	for (k =0; string[k] != '\0'; ++k);
	for (i = 0; i<= k; i++)
	{
		if (string[i] == ' ')
		{
			string[i] = '*';
			count++;
		}
	}
	newsize = k + 2*count;
	char newstring[newsize];
	i =0;
	count = newsize;

	for (i = k;i >= 0; i--)
	{
		if (string[i] != '*')
		{
			newstring[count] = string[i];
			count--;			
		}
		else
		{
			newstring[count] = '0';			
			newstring[count-1] = '2';
			newstring[count-2] = '%';
			count = count-3;
		}
	}
	printf("%s \n",&newstring);
}
int main (void)
{
	char string[1000];
	char * newstring;
	printf("Enter String to URLify");
	gets(string);
	ReplaceSpaces(string);
	return(0);
}
