//Q:- Write a program in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
int main()
{
    int n,i;
    printf("\t\t\t----------Reversing the number using Array----------\n\n\n");
    printf("Enter the length of the number:- ");
    scanf("%d",&n);
    int Array[n];
    //storing the data in Array
    printf("Enter the number \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&Array[i]);
    }
    printf("Number after Reversing \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",Array[i]%10);
    }
}
