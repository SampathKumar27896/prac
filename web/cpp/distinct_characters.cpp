
#include<bits/stdc++.h> 
using namespace std;
int main() {
  string name;
  int i;
  int distinct_characters = 0;
  int *count = new int[26];
  fill_n(count, 26, 0);
  
  cin >> name;

  for( i = 0; i < name.length(); i++) {
	  count[ int(name[i]) - 97 ]++;
  }
  for(i = 0; i < 26; i++) {
	  if(count[i] > 0)
	  	distinct_characters++;
  }
  cout << ( (distinct_characters % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");
  delete[] count;
  return 0;
}