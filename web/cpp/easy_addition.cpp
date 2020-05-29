
#include<bits/stdc++.h> 
using namespace std;
int main() {
 int a[3] = {0};
 int i, number_count = 0;
 string s;
 cin >> s;
 for(i = 0; i < s.length(); i++) {
   if(s[i] != '+'){
	   a[int(s[i] - '0') - 1]++;
	   number_count++;
   }   
 }
 for( i = 0; i < 3; i++) {
	 for( int j = 0; j < a[i]; j++) {
		 cout << (i + 1);
		 number_count--;
		 if(number_count >= 1)
		 	cout << '+';
	 }
 }
 return 0;
}