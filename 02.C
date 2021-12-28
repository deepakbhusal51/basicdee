#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[100],large,i,num;
    printf("elements number to enter\n");
    scanf("%d",&num);
    for (i=0;i<num;i++)
    {
        printf("enter the elment in arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    for(i=1;i<num;i++)
    {
        if(arr[i]>large)
        large=arr[i];
    }
    printf("the largest number in array is %d",large);

}