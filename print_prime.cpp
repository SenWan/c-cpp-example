#include <iostream>
using namespace std;

int isPrimeNumber(int);

int main()
{
   bool isPrime;
   for(int n = 2; n < 100; n++) {

      isPrime = isPrimeNumber(n);

      if(isPrime == true)
         cout<<n<<" ";
   }
   return 0;
}

int isPrimeNumber(int n) {
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0) {
         isPrime = false;
         break;
      }
   }
   return isPrime;
}
