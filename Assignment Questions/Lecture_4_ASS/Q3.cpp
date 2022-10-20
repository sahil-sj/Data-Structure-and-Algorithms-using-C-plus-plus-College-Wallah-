// There are 45 total pupils in the class, 25 of whom are boys. 
// Write a program to find how many girls recieved grades "A" 
// if 17 boys made up 80% of the students that received grades "A"
#include <iostream>
using namespace std;
int main()
{
    int boys, girls, total;
    boys = 17;
    total = (80 * 45) / 100;
    girls = total - boys;
    cout << "The no of girls getting grafe 'A' are " << girls;
    return 0;
}