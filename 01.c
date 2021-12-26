#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[20],i,sum=0,num;
    printf("enter the number of elements you want to enter \n");
    scanf("%d",&num);
    for (i=0;i<num;i++)
    {
        printf("enter the elements in arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("the elements in array :");
    for (i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    //for sum of elements in array
    for (i=0;i<num;i++)
    {
        sum=sum+arr[i];
    }
    printf("\nthe sum of elements of array is %d",sum);
}