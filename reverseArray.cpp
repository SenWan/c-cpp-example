#include <bits/stdc++.h>
using namespace std;

int main(){

const int size = 5;
double a[size];

cout << "Enter " << size << " Numbers:\t";
for(int i=0; i<size; i++){
    cin >> a[i];
}
cout << "In reverse order :";
for(int i=size-1; i>=0; i--){
    cout <<"\t"<<a[i];
}
}
