#include <iostream>
using namespace std;
int main() {
  
  int number, k, i;
  cin >> number;
  cin >> k;
  for(i = 0; i < k; i++) {
      if(number % 10 != 0)  
        number --;
      else 
        number /= 10;
  }
  cout << number;

}
