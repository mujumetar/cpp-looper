#include <iostream>
using namespace std;

// digit chacker program

int main () {
   
   int n;
   cout << "enter the number:  ";
   cin >> n;

   int digit = 0;

   while (n >= 1){
    n/=10;
    digit++;
   }
   cout << digit;
}