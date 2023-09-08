// W.A.P which takes pin number of the user as input and then verifies his pin.
// if pin is verified the program shall display "pin verified" and "Welcome"...
// otherwise the program shall give user another chance.After 4 wrong attempts,the program shall display "Limit Expired" and then exit....
// **** you must write at least 5 digit number.. and this can be assumed and fed into the program with which input pin's matched...

#include<iostream>
using namespace std;
int verify_pin(int a)
{
    int count=0;
    while(a!=0)
    {
        a=a/10;
        count++;
    }
    // As we are informed that 5 digit pin can be used as a valid PIN....
    if(count == 5)
    return 1;
    else
    return 0;
}
int main()
{
    int attempt_time=4;
    int i;
    for( i=1;i<=attempt_time;i++)
    {
        cout << "You have anothe "<<(attempt_time-i)<< " attempts more....." << endl;
        int n;
        cout << "Enter your PIN :";
        cin >> n;
        int check = verify_pin(n);
        if(check == 1)
        {
            cout << "Your PIN is Verified...." << endl;
            cout << "Welcome ...."<< endl;
            break;
        }
        else if(check == 0)
        {
            cout << "you have entered wrong pin ..." << endl;
            continue;
        }
    }
    if(i==5) 
    {
        cout << "Limit Expired..." << endl;
    }
    return 0;
}
