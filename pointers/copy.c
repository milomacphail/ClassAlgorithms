#include<stdio.h>

void copy(int*, int*);
void changeArray(int[]);

int main(void)
{
    printf("Hello, World.\n");
    int num1 = 5;
    int num2 = 10;
    printf("num1 + num2 = %i\n", num1 + num2);
    copy(&num1, &num2);
    printf("%i + %i= %i\n", num1, num2, num1 + num2);
    int arr[5] = {1, 2, 4, 9, 10};
    changeArray(arr);
    printf("arr[2]: %i\n", arr[2]);
}

void changeArray(int theArray[])
{
    theArray[2] = 30;
}

void copy(int* x, int* y)
{
    *y = *x;
}

