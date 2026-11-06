#include <stdio.h>

int main() 
{
    int numbers[6] = {14, 7, 38, 25, 3, 45};
    int foundIndex = -1;
    int key;

    printf("Enter a number to find: ");
    scanf("%d", &key); 

    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == key)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1)
    {
        printf("%d is present at index %d.\n", key, foundIndex);
    }
    else
    {
        printf("%d is missing from the array.\n", key);
    }

    return 0;
}
