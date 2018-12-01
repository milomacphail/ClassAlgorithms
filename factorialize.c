#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

long long factorialize(int input);

long long factorialize(int input)
{

    if(input == 1 || input == 0)
    {
        return 1;
    }
    for(int i = input - 1; i >= 1; i--)
    {
        input = input * i;
    }
    return input;
}

int main(void)
{
    int input =  get_int();
    printf("%lld\n", factorialize(input));
}





