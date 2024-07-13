#include <stdio.h>
int main()
{
    int num,r,temp,rev=0;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    temp= num;
    while (num!=0)
    {
        r=num%10;
        rev=(rev*10)+r;
        num=num/10;
    }
    if (rev==temp)
    {
        printf("%d is a palindrome number",temp);
    }
    else
    {
        printf("%d is not a palindrome number",temp);
    }
    return 0;
}
