//Q:-Write a program in C to store elements in an array and print it.
#include<stdio.h>
int main()
{
    int n,i;
    printf("\t\t\t----------Storing the data in Array and Display it----------\n\n\n");
    printf("Enter the Size of Array you want to Create:-");
    scanf("%d",&n);
    int Array[n];
    //storing the data in Array
    for(i=0;i<n;i++)
    {
        printf("Enter Array[%d]\t",i);
        scanf("%d",&Array[i]);
    }
    printf("\n\n----------Printing the Data is Array-----------\n\n\n");
     //printing the Data from Array
     for(i=0;i<n;i++)
    {
        printf("Data of Array[%d] is ",i);
        printf("%d\n",Array[i]);
    }

}
