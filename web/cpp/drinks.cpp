
#include<bits/stdc++.h> 
using namespace std;

int main() {
	int n, d;
	long double fraction = 0.0; 
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> d;
		fraction += d;
	}
	cout << fraction/n ; 
    return 0;
}