
#include<bits/stdc++.h> 
using namespace std;

int main() {

	int k,l,m,n,d;
	cin >> k >> l >> m >> n >> d;
	if( k == 1 || l == 1 || m == 1 || n == 1)
		cout << d;
	else{
		cout << d - (
		d - (d/k) - (d/l) - (d/m) - (d/n) + (d/(k * l))
		+(d/(k * m))  + (d/(k * n)) + (d/(l * m)) + (d/(l * n)) + (d/(m * n)) - (d/(k * l * m * n)) 
		);
	}
    return 0;
}