
#include<bits/stdc++.h> 
using namespace std;
int main() {
 string name;
 int l_count = 0,u_count = 0;
 cin >> name;
 for(int i = 0; i < name.length(); i++) {
	 if(islower(name[i]))
	 	l_count++;
 }
 u_count = name.length() - l_count;
 transform(name.begin(), name.end(), name.begin(), (l_count == u_count || l_count > u_count)? ::tolower : ::toupper);
 cout << name;
 return 0;
}