// WAP to caclulate the sum of first and second last digut of a 5 digit number.
#include <iostream>
using namespace std;
int main()
{
    int n, first, second, third, fourth, sum;
    cout << "Enter 5 digit number\n";
    cin >> n;
    first = n / 10000;
    n = n % 10000;
    second = n / 1000;
    n = n % 1000;
    third = n / 100;
    n = n % 100;
    fourth = n / 10;
    sum = first + fourth;
    cout << "Sum of first and fourth digit of a 5 digit no is " << sum;
    return 0;
}