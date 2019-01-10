#include<stdio.h>
#include<cs50.h>
//factorialization
long long fact(int);
long long fib(int);
int expo(int, int);

int main(void)
{
    int expoResult = expo(5, 2);
   int num = get_int();
   long long result = fact(num);
   printf("!%d = %lli\n", num, result);
   long long result2 = fib(40);
   printf("8th position of fibonacci:%lld\n", result2);
   printf("Exponent is %i.", expoResult);

}

long long fib(int num)
{
    //if 1 or 0 return 1 or 0
    if (num <= 1)
    {
        return num;
    }
    return fib(num - 1) + fib(num -2);
}

long long fact(int num)
{
    if (num <= 1)
    return num;
    else
    return num * (fact(num -1));
}

int expo(int y, int x)
{
    if (x == 1)
    {
    return 0;
    }
    else
    return(y^x * (y^(x - 1)));
}

//for (i = num; i > 0; i--)
//    {
//        int sum = (int num * int num);
//        return sum;
//    }
