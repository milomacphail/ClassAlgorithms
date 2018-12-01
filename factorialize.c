#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

long long factorialize(int input);

long long factorialize(int input)
{
    long long input2 = input;
    if(input2 == 1 || input2 == 0)
    {
        return 1;
    }
    for(long long i = input2 - 1; i >= 1; i--)
    {
        input2 = input2 * i;
    }
    return input2;
}

int main(void)
{
    int input =  get_int();
    printf("%lld\n", factorialize(input));
}





