#include <stdio.h>
int main() 
{
    char name[20];
    int rno;
    float m1,m2,m3;
    float tot,p;
    printf("Enter the name of the student: ");
    scanf("%s",name);
    printf("Enter the roll number of the student: ");
    scanf("%d", &rno);
    printf("Enter the marks of three subjects: ");
    scanf("%f %f %f",&m1,&m2,&m3);
    tot=m1+m2+m3;
    p=(tot/300)*100;
    printf("Name: %s\n",name);
    printf("Roll Number: %d\n",rno);
    printf("Total Marks: %f\n",tot);
    printf("Percentage: %f\n",p);
    if (p<100 && p>=90) 
    {
        printf("grade : S\n");
    }
    else if (p<90 && p>=80) 
    {
        printf("grade : A\n");
    }
    else if (p<80 && p>=70) 
    {
        printf("grade : B\n");
    }
    else if (p<70 && p>=60) 
    {
        printf("grade : C\n");
    }
    else if (p<60 && p>=50) 
    {
        printf("grade : D\n");
    
    }
    else if (p<50 && p>=40) 
    {
        printf("grade : E\n"); 
    }
    else
    {
      printf("FAIL\n");
    }
    return 0;
}
