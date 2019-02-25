//Q. WAP to Sawap two number without using temporary variable
#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Enter number 1 and then number 2 \n");
    scanf("%d%d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("Numbers after swaping number 1 = %d  \n\t\tand   number 2 = %d ",num1,num2);
}
