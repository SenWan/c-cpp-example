#include <iostream>
using namespace std;
int main(){
int n, count = 0, sum = 0;
cout << "Enter positive integers (0 to quit):" << endl;
for(;;){
    cout << "\t" << count + 1 << ": ";
    cin >> n;
    if (n <= 0){
        break;
    }
    count++;
    sum = sum + n;
}
cout << "The average of those " << count << " positive numbers is "
<< float(sum)/count << endl;

}
