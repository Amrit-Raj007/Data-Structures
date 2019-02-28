//Q: WAP to find whether a given year is Leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year you want to Check for leap year ");
    scanf("%d",&year);
    if((year%4==0)&&((year%100!=0)&&(year%400!=0)))
       printf("This year is Leap Year");
        else
        printf("This year is NOT a Leap Year");
}
