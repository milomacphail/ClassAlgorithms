#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

int sumFibs(int num);

int sumFibs(int num)
{
    int a = 0;
    int b = 1;
    int f = 1;
    int sum = 0;
    while (f <= num)
    {
        if (f % 2 == 1)
        {
            sum += f;
        }
            f = a + b;
            a = b;
            b = f;
    }
    return sum;
}

int main(void)
{
    int num = get_int();
    printf("%i\n", sumFibs(num));
}