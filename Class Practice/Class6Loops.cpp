#include<iostream>
using namespace std;
int main()
{
    int n;
    // cin>>n;
    int sum=0,i=1;
    // while(i<=n)
    // {
    //     sum+=i;
    //     i+=1;
    // }
    // cout<<"Sum is : "<<sum;
    // do{
    //     sum+=i;
    //     i++;
    // }while(i<=n);
    // cout<<sum;
    // return 0;
    for(;i<=50;i++)
    {
        if(i%3==0)
            continue;
        cout<<i<<endl;
    }
}