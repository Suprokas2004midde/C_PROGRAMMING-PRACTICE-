// OUES:- Write a program to print the transpose of a matrix.....
// CREATE AN ARRAY TO  print a transposed matrix (WITHOUT USING EXTRA an array)...... 
// IT SHOULD BE A SQUARE MATRIX....
#include<stdio.h>
int main()
{
    //Declearation
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int temp;
    // Transpose....
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=i;j++)
        // Swaping....
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //Output....
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}