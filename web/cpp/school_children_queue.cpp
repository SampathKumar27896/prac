
#include<bits/stdc++.h> 
using namespace std;
int main() {
  int len,t,i,j,k;
  string q;
  cin >> len >> t >> q;
  char temp = '\0';
  for( i = 0; i < t; i++) {
	k = 1;
	j = 0;
  	while( k < len) {
		  if(q[j] == 'B' && q[k] == 'G') {
			  q[j] = 'G';
			  q[k] = 'B';
			  j = k+1;
			  k += 2;
		  }else {
			  j++;
			  k++;
		  }
	}
  }
  cout << q;
  return 0;
}