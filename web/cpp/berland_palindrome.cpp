
#include<bits/stdc++.h> 
using namespace std;
int main() {
  string b1,b2;
  cin >> b1 >> b2;
  int i,j,same_flag = 1;
  for(i = 0, j = b1.length() - 1;j>= 0; i++, j--) {
	  if(b1[i] != b2[j]){
		  same_flag = 0;
		  break;
	  }
  }
  cout << ( (same_flag == 1)? "YES" : "NO");
  return 0;
}