//MULTIPLICATION OF A MATRIX,WE HAVE TO TAKE DATA FROM USER....
#include<stdio.h>
int main()
{
    //1st matrix...
    int m;
    printf("Enter the row of 1st matrix:");
    scanf("%d",&m);
    int n;
    printf("Enter the column of 1st matrix:");
    scanf("%d",&n);
    // 2nd matrix...
    int p;
    printf("Enter the row of 2st matrix:");
    scanf("%d",&p);
    int q;
    printf("Enter the column of 2st matrix:");
    scanf("%d",&q);
    // Declearing 1st matrix...
    int a[m][n];
    printf("Enter the indeces of matrix a....");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //Declearing 2nd matrix....
    int b[p][q];
    printf("Enter the indecen of matrix b...");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    // declearing 3rd matrix.....
    int res[m][q];
    int cr=p;
    // check
    if(n!=p)
    {
        printf("Multiplicatin can't be done..\nDue to size of array");
    }
    else
    {
    // calculation of multiplication.....
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            // res[i][j]= i row of a array *j column of b array....
            // the main formula is res[i][j]=(a[i][0],a[i][1],a[i][2])*(b[0][j],b[1][j],b[2][j])
            // in previous line for a the value of i is constant but j is increasing... And for array 'b' the value of j is constant but i is increasing by i.....
            // And, both cases 'i' term of a array and 'j' term of b array is same..
            // here we can use third variable k...
            /* like 
            a[i][0] * b[0][j]  k=0...
            a[i][1] * b[1][j]  k=1...
            a[i][2] * b[2][j]  k=2...
            */
               
            res[i][j]=0;
            for(int k=0;k<p;k++)
            {
                res[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    // printing process...
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}