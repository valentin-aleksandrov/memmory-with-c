#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Todo -> add that example
    // Todo -> example 2
    printf("Hello !\n");
    int size = 20;
    int *pointer = malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++)
    {
        pointer[i] = i + 1;
    }

    for (int i = 0; i < size; i++)
    {
        // printf("%d - ", pointer[i]);
    }

    int target = 12;
    int targetElementIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (target == pointer[i])
        {
            targetElementIndex = i;
        }
    }
    int newArrayLength = size - 1;
    int newSizeBlock = newArrayLength * sizeof(int);
    int *arrayWithDeletedItem = malloc(newSizeBlock);

    for (int i = 0; i < newArrayLength; i++)
    {
        if (i >= targetElementIndex)
        {
            arrayWithDeletedItem[i] = pointer[i + 1];
        }
        else
        {
            arrayWithDeletedItem[i] = pointer[i];
        }
    }

    printf("\n");

    for (int i = 0; i < newArrayLength; i++)
    {
        printf("%d - ", arrayWithDeletedItem[i]);
    }

    free(pointer);
    free(arrayWithDeletedItem);
    return 0;
}
