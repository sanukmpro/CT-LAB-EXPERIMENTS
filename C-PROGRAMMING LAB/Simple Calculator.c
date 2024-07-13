#include <stdio.h>
int main() 
{
    char op;
    int a,b,s;
    printf("Enter the operator : ");
    scanf("%c",&op);
    printf("Enter two integers : ");
    scanf("%d%d",&a,&b);
    switch (op) 
    {
        case '+': s=a+b;
            printf("Sum =  %d",s);
            break;
        case '-': s=a-b;
            printf("Difference =  %d",s);
            break;
        case '*': s=a*b;
            printf("Product =  %d",s);
            break;
        case '/': s=a/b;
            printf("Division =  %d",s);
            break;
        default:
            printf("Enter a valid operator.\n");
            break;
    }
    return 0;
}
