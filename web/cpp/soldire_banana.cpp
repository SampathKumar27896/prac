
#include<bits/stdc++.h> 
using namespace std;
int main() {
  int k,n,w,i,sum = 0;
  cin >> k >> n >> w;
  for( i = 1; i <= w; i++) {
	  sum += ( i * k);
  }
  cout << ((sum > n)? abs(sum - n) : 0);
  return 0;
}