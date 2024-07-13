#include <stdio.h>
int main()
{
    int num,r,temp,sum=0;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    temp= num;
    while (num!=0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }
    if (sum==temp)
    {
        printf("%d is a amstrong number",temp);
    }
    else
    {
        printf("%d is not a amstrong number",temp);
    }
    return 0;
}
