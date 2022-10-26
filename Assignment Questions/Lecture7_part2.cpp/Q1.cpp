#include<iostream>
using namespace std;
// 
// Q5 - Write a program to print the cross pattern given below (in the shape of X):
// *  *
//  * *
//   *
//  **
// *  *
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j || i+j==n+1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}