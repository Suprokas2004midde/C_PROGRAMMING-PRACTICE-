#include<stdio.h>
int main()
{
    // int n;
    // printf("Enter the size of array:");
    // scanf("%d",&n);
    int a;
    printf("Enter the value that you want to find:");
    scanf("%d",&a);
    int arr[10]={1,2,3,4,5,6,7,8,11,5};
    int count=0;
    //int x=0;
    for(int i=0;i<10/*(size of array)*/;i++)
    {
        if(a<arr[i])  // check wheather the number is greater than "a"....
        {
            printf("%d ",arr[i]); // then print the numbers.....
            count++;  
        }
    }
    printf("\n");
    printf("total number greater than %d is: %d",a,count);// it counts how many numbers are greater than "a"...
    return 0;
}