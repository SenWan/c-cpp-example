#include<iostream>
using namespace std;

int index(int,int[],int);
int main()
{ int a[] = { 11,33, 55,77,45,76 };
cout << "index(44,a,7) = " << index(45,a,7) << endl;
cout << "index(50,a,7) = " << index(50,a,7) << endl;
}
int index(int x, int a[],int n)
{
for (int i=0; i<n; i++)
    if(a[i] == x) return i;
return n;
}
