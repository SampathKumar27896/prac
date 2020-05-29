
#include<bits/stdc++.h> 
using namespace std;
int main() {
  int n, exist, capacity, count = 0;
  cin >> n; 
  for(int i = 0; i < n; i++){
	  cin >> exist >> capacity;
	  if( capacity - exist > 1)
	  	count++;
  }
  cout << count;
  return 0;
}