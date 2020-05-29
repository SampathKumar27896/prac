
#include<bits/stdc++.h> 
using namespace std;
int main() {
  int stops, capacity = 0, exit = 0, entry = 0,max = 0;
  cin >> stops;
  for(int i = 0; i < stops; i++){
	  cin >> exit >> entry;
	  capacity = capacity - exit + entry;
	  if(capacity > max)
	  	max = capacity; 
  }
  cout << max;
  return 0;
}