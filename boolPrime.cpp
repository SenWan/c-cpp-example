#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int);
int main(){
for (int n=0; n < 80; n++)
if (isPrime(n)) cout << n << " ";
cout << endl;
}
bool isPrime(int n)
{
    float sqrtn = sqrt(n);
    if(n < 2) return false;
    if(n < 4) return true;
    if(n%2 == 0) return false;
    for(int d=3; d<=sqrtn; d += 2)
        if(n%d == 0) return false;
    return true;
}
