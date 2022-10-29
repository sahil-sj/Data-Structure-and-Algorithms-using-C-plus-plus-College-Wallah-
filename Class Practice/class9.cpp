#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    // Binary to decimal
    int n;
    cin>>n;
    // int digit,count=0,sum=0;
    // while(n>0)
    // {
    //     digit=n%10;
    //     if(digit==1)
    //     {
    //         sum+=digit*(pow(2,count));
    //     }
    //     count++;
    //     n=n/10;
    // }
    // cout<<"The decimal to binary is "<<sum;

    // Decimal to binary
    int parity,ans=0,power=1;
    while(n>0)
    {
        parity=n%2;
        ans+=power*parity;
        power*=10;
        n/=2;
    }
    cout<<ans;
}
