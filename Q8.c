#include <stdio.h>
int main()
{
    int num, i=0 , j = 1, sum = 0,k;
    printf("enter number");
    scanf("%d",&num);

       for(k=1;k<=num;k++)
    {
        printf("%d ", sum);
        sum = i + j;
        j = i;
        i = sum;
    }
    return 0;
}
