#include<iostream>
#include<cmath>
using namespace std;
bool isLeapYear(int y)
{
    return y % 4 == 0 && 100 != 0 || y % 400 == 0;
}
bool isLeapYear(int);
int main()
{
    int n;
    do
    {
        cin >> n;
        if(isLeapYear(n)){
            cout << n << " is a leap year" << endl;
        }
        else{
            cout << n << " is not a leap year" << endl;
        }
    }
    while(n>1);
}

