// considering the terms in the Fibonacci sequence whose values do 
// not exceed four million, find the sum of the even-valued terms.

#include <stdio.h>

int main(int argc, char *argv[])
{
    long fib1 = 1;
    long fib2 = 1;
    long result = 0;
    long sum = 0;

    while(result <= 4000000){
        if(result % 2 == 0)
            sum = sum + result;

        result = fib1 + fib2;
        fib1 = fib2;
        fib2 = result;
    }
    printf("%li\n", sum);
    return 0;
}