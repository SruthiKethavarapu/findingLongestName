// reading n names and finding longest name

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int count, counter;
    char **names;        
    char *longest;
    int maxLength = 0;

    printf("Enter how many names you want to read to print longest name: ");
    scanf("%d", &count);

    names = (char **)malloc(count * sizeof(char *));  

    for (counter = 0; counter < count; counter++) {
        names[counter] = (char *)malloc(50 * sizeof(char)); 
        printf("Enter name%d: ", counter + 1);
        scanf("%s", names[counter]);
    }
    for(counter = 0; counter < count; counter++)
    {
        if (strlen(names[counter]) > maxLength) 
        {
            maxLength = strlen(names[counter]);
            longest = names[counter];   
        }
    }

    printf("\nLongest name is: %s\n", longest);
}
