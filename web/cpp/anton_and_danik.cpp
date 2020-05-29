
#include<bits/stdc++.h> 
using namespace std;
int main() {
 int len,a_count = 0, d_count = 0;
 string games;
 cin >> len >> games;
 for(int i = 0; i < len; i++) {
	 if(games[i] == 'A')
	 	a_count++;
 }
 d_count = (len - a_count);
 if(a_count == d_count)
	cout << "Friendship";
 else 
 	cout << ( ( a_count > d_count )? "Anton" : "Danik");
 return 0;
}