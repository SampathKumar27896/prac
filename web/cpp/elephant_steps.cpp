
#include<bits/stdc++.h> 
using namespace std;
int main() {
  int co;
  cin >> co;
  cout << ( (co % 5 == 0)? co / 5 : co / 5 + 1);
  return 0;
}