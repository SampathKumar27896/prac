#include <iostream>
using namespace std;
int main() {
  int n, p,v,t, no_of_problems = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> p >> v >> t;
    if( (p + v + t) >= 2 )
      no_of_problems++;
  }
  cout << no_of_problems;
  return 0;

}