#include <stdio.h>
#include <math.h>
int main()
{
    int num, n = 0, copy, digit, sum = 0;

    printf("enter a number");
    scanf("%d", &num);
    copy = num;
    while (num != 0)
    {
        n++;
        num /= 10;
    }
    num = copy;
    while (num != 0)
    {
        digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    if (copy == sum)
        printf("armstrong number");

    else
        printf("not an armstrong number");

    return 0;
}