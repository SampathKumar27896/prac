
#include<bits/stdc++.h> 
using namespace std;
int main() {
  unsigned long long int luck, num = 0, count = 0;
  cin >> luck;
  while(luck != 0) {
	  num = luck % 10;
	  if( num == 4 || num == 7)
	  	count++;
	  luck = luck / 10;
  }
  cout << ( (count == 4 or count == 7)? "YES" : "NO");
  return 0;
}