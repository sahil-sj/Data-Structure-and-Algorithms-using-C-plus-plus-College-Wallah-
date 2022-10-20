// WAP to calculate sum of digits of 3 digit no
#include <iostream>
using namespace std;
int main()
{
    int n,f,s,t,sum;
    cout<<"Enter 3 digit no\n";
    cin>>n;
    f=n/100;
    n=n%100;
    s=n/10;
    n=n%10;
    t=n;
    sum=f+s+t;
    cout<<"The sum of digits of a 3 digit no is : "<<sum;
    return 0;
}