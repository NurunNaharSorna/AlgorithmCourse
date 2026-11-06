#include <stdio.h>

int main() 
{
    int numbers[6] = {3, 7, 14, 25, 38, 45};
    int foundIndex = -1;
    int key;

    printf("Enter a number to find: ");
    scanf("%d", &key); 

    int low = 0;
    int high = 5;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (numbers[mid] == key)
        {
            foundIndex = mid;
            break;
        }
        else if (numbers[mid] < key)
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
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
