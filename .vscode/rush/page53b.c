#include<stdio.h>
int main()
{
    int ram,sam,ajay;
    printf("Enter the age of them\n");
    scanf("%d%d%d",&ram,&sam,&ajay);
    if(ram<sam && ram<ajay)
    printf("ram is youngest");
    else if (sam<ram && sam<ajay)
    {
        printf("sam is the youngest");
    }
    else
    printf("ajay is the youngest");

    return 0;
}