//reading n names and printing the longest name using array of pointers

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int counter, count, length = 20;
	printf("Enter how many names you want to read to find longest name: ");
	scanf("%d", &count);
	char *names[count];
	char *longest;
	int maxLength = 0;
	for(counter = 0; counter < count; counter++)
	{
		names[counter] = (char *)malloc(length);
		printf("Enter name%d: ", counter + 1);
		scanf("%s", names[counter]);

		if((strlen(names[counter]) > maxLength))
		{
			maxLength = strlen(names[counter]);
			longest = names[counter];
		}
	}
	printf("Longest names is: %s", longest);
}