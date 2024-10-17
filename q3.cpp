#include <iostream>
using namespace std;

// first and last digit sum

int main () {
   
   int n;
   cout << "enter the number:  ";
   cin >> n;

   int digit = 0;

  int ld = n%10;

  while(n >= 10){
    n = n/10;
  }

  cout << "the sum of first and last digit :  " << n + ld;
}