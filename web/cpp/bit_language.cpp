#include <iostream>
#include <string>
using namespace std;
int main() {
  int result = 0, n;
  string statement;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> statement;
    ( statement.find("++") != string::npos ) ? result++ : result--;
  }
  cout << result;
  return 0;
}