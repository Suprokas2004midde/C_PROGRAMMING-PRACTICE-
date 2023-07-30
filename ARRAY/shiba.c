 #include<stdio.h>
int main(){
    int a[5] = {2,2,3,2,2};
    int b[5];
    for (int i = 0; i <= 4; i++)
    {
        
        b[i] = a[4-i];
        if (b[i] == a[i])
        {
            printf("It's A Pelindrome Number");
        }
        else
        {
            printf("It's not Pelindrome Number");
        }
        return 0;
    }
    return 0;
}
