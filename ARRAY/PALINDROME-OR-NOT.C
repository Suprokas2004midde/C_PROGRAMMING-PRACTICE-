#include<stdio.h>
// int check(int arr[], int count)
// {
//     int a=0,b=6;
//     for(int i=0;i<7;i++)
//     {
//         if()
//         {
//             count=0;
//         }
//         else
//         {
//             count=1;
//             break;
//         }
//         a++;
//         b--;
//     }
//     return count;
// }
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n],count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a=0,b=n-1;
    for(int i=0;i<n/2+1;i++)
    {
        if(arr[a]==arr[b])
        {
            count=0;
        }
        else
        {
            count=1;
            printf("It is not palindrome...");
            break;
        }
        a++;
        b--;
    }
    if(count==0)
    printf("it is palindrome...");
    return 0;
}