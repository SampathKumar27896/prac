
#include<bits/stdc++.h> 
using namespace std;
int main() {
 int n,groups = 0;
 string m,p; 
 cin >> n;
 for(int i = 0; i < n; i++) {
	 cin >> m; 
	 if(p == ""){
	 	p = m;
		groups++;
	 }
	 if(p.compare(m) == 0)
	 	continue;
	 else{
		 groups++;
		 p = m;
	 }
	 	
 }
 cout << groups;
 return 0;
}