#include<stdio.h>
void reverse(int arr[])
{
    int a=0,b=6;
    for(int i=0;i<7;i++)
    {
        int temp;
        if (a<b)
        {
           temp=arr[a];
           arr[a]=arr[b];
           arr[b]=temp;
        }
        a++;
        b--;
    }
    return ;
}
int main()
{
    int arr[7]={1,8,3,4,5,6,7};
    reverse(arr); // iin the case of array we pass the reference to the function....
    for(int i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}