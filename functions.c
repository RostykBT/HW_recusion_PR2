#include "functions.h"
#include <math.h>
#include <stdio.h>

int f(float current, int i, float x, float arr[], float e, int elementCounter)
{

    float new = current *(-x * x / 2 / (float)i / (2 * (float)i + 1));
    //debug: printf("i: %d, current: %f\n", i, current);
    if (fabs(arr[i] - new) <= e)
    {
        return elementCounter;
    }
    else
    {
        arr[i] = new;
        elementCounter++;
        f(new, i + 1, x, arr, e, elementCounter);
    }
}

void print(float arr[], int elementCounter)
{
    FILE *file = fopen("F.txt", "w");
    int i = 0;
    for (i = 0; i < elementCounter; i++)
    {
        fprintf(file, "%f \n", arr[i]);
    }
    fprintf(file, "Number of elements: %d", elementCounter);
    fclose(file);
    // for (i = 0; i < elementCounter; i++)
    // {
    //     printf("%f \n", arr[i]);
    // }
    printf("Success! Check F.txt for results.\n");
}

float inputFloat(char text[])
{
    float value;
    printf("%s", text);
    scanf("%f", &value);
    return value;
}
