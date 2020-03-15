#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void isUnique (char *strinput)
{
	bool char_set[128] = {0};
	int checker = 0;
	int i , j ,k ,l;
	for (i = 0; i <strlen(strinput); i++)
	{
		int val = strinput[i];
		if (char_set[val])
		{
			char_set[val] = false;
		}
		else
		{
			char_set[val] = true;
		}
	}
	for (k =0; k <strlen(strinput); k++)
	{
		int val = strinput[k] - 'A';
		printf("%d   ",val);
		if (checker & (1 << val))
		{
			checker &= ~(1 << val);
		}
		else
		{
			checker |= (1 << val);
		}
	}
	for (l = 0; l<= (sizeof(checker)*8); l++)
	{
		if (checker & (1<<l))
		{
			printf("%c \n", 'A'+l);
		}
	}
	for (j =0; j<128;j++)
	{
		if (char_set[j])
		{
			printf("%c \n", j);
		}
	}
}

int main (void)
{
	char string[10];
	printf("Enter String:");
	scanf("%s", &string);
	isUnique(string);
	return(0);
}
