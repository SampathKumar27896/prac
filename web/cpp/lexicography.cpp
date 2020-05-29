#include<bits/stdc++.h> 
using namespace std;
int main() {
   
  int result = 0;
  string name1, name2;
  cin >> name1 >> name2;
  transform(name1.begin(), name1.end(), name1.begin(), ::tolower);
  transform(name2.begin(), name2.end(), name2.begin(), ::tolower);
  result = name1.compare(name2);
  if(result == 0)
    cout << 0;
  else if(result > 0)
    cout << 1;
  else
    cout << -1;

  return 0;
}