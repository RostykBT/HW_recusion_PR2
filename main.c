#include "functions.h"
#define N 15

int main()
{
    float x;
    float e;

    int elemetCounter = 1;

    float arr[N];
    arr[0] = 1;

    x = inputFloat("Enter x: ");
    e = inputFloat("Enter e: ");

    elemetCounter = f(x, 1, x, arr, e, elemetCounter);
    print(arr, elemetCounter);
    

    return 0;
}
