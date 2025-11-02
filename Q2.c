#include<stdio.h>
int main()
{
    int num1,num2,hcf=0;
    
    printf("enter first and second number");
    scanf("%d %d",&num1,&num2);

    for(int i = 1; i<=num1; i++)
    {
        if(num1 % i==0 && num2 % i==0)
        {
            if(hcf<i)
            hcf=i;
        }
    }
    printf("hcf = %d" , hcf);
    return 0;
}