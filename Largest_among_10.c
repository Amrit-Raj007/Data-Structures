//Q: WAP to display the largest of 10 numbers

#include<stdio.h>
int main()
{
int i=0,large=-1,num;
while(i<10)
{
printf("Enter the number");
scanf("%d",&num);
large=num>large?num:large;
i++;
}
printf("Largest number among 10 numbers is %d",large);
}
