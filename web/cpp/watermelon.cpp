#include <iostream>
#include <cmath>
#include <cfenv>
using namespace std;
int main() {
  int kilo = 0;
  cin >> kilo;
  cout << ( (kilo > 2 && kilo % 2 == 0) ? "YES" : "NO" ); 
  return 0;
}