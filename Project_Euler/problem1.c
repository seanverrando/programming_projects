// This program collects mulitples of 3 and 5 below 1000 and add the
// sum together
// ∑𝑘1=13333𝑘1+∑𝑘2=11995𝑘2−∑𝑘3=16615𝑘3=166833+99500−33165=233168

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    int sum = 0;
    for(i = 0; i < 1000; i++)
    {
        if((i % 3 == 0) || (i % 5 ==0))
            sum = sum + i;
    }
    printf("%i\n", sum);
    return 0;
}