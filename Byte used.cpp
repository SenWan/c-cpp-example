//This program tells you how much space each of the 12 fundamental types uses:
#include<iostream>
using namespace std;

int main(){

cout << "Numbers of byte used :\n" ;
cout << "\t char: " << sizeof(char) << endl;
cout << "\t short: " << sizeof(short) << endl;
cout << "\t int: " << sizeof(int) << endl;
cout << "\t long: " << sizeof(long) << endl;
cout << "\t unsigned char: " << sizeof(unsigned char) << endl;
cout << "\tunsigned short: " << sizeof(unsigned short) << endl;
cout << "\t unsigned int: " << sizeof(unsigned int) << endl;
cout << "\t unsigned long: " << sizeof(unsigned long) << endl;
cout << "\t signed char: " << sizeof(signed char) << endl;
cout << "\t float: " << sizeof(float) << endl;
cout << "\t double: " << sizeof(double) << endl;
cout << "\t long double: " << sizeof(long double) << endl;
return 0;
}
