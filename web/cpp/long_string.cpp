#include <iostream>
#include <cstring>
using namespace std;
int main() {
  int n = 0, i = 0;
  string word;
  cin >> n;
  for(i ; i < n ; i++) {
      cin >> word; 
      if(word.length() > 10) {
        cout << word[0] << (word.length() - 2) << word[word.length() - 1];
      }
      else
        cout << word;
    cout << "\n";
  }
  
  return 0;
}