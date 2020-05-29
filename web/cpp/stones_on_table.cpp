
#include<bits/stdc++.h> 
using namespace std;
int main() {
  int n,i,j,count = 0;
  string stones;
  cin >> n >> stones;
  for(i = 0,j = 1; j < n; j++){
	  if(stones[i] == stones[j])
	  	count++;
	  i = j; 
  }
  cout << count;
  return 0;
}