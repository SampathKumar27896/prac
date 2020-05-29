#include <iostream>
#include <new>
using namespace std;
int main() {
  int *n_array, n, k, participants = 0;
  cin >> n >> k;
  n_array = new int[n];
  for(int i = 0; i < n; i++) {
    cin >> n_array[i];
  }
  for(int i = 0; i < n; i++){
    if(n_array[i] > 0) {
      if(n_array[i] >= n_array[k-1]) {
        participants++;
      }
    }
  }
  cout << participants;
  return 0;

}