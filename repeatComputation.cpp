#include<iostream>
#include<cmath>
using namespace std;
int main(){
double x;
cout << "Enter a positive number : "<< endl;
cin >> x;
while (x > 0){
    cout << "sqrt(" << x << ") = " << sqrt(x) << endl;
    cout << "Enter another positive number (or 0 to quit): " << endl;
    cin >> x;
}
return 0;
}
