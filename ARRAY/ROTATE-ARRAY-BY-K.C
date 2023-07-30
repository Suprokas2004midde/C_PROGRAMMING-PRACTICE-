//write a program to rotate an array by k steps,where k is non negetive number...?
#include<stdio.h>
int main()
{
    int k=4;
    int arr[6]={1,2,3,4,5,6};
    int rotate=1;
    while(rotate<=k%6)
    {
      int temp=arr[0];
      for(int i=0;i<6;i++)
      {
        if(i<5)
         arr[i]=arr[i+1];
        else
         arr[i]=temp;
        printf("%d ",arr[i]);
      }
      printf("\n");
      rotate++;
    }
    printf("The rotaion is:");
    for(int i=0;i<6;i++)
    {
      printf("%d ",arr[i]);
    }
    return 0;
}