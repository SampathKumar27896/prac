
#include<bits/stdc++.h> 
using namespace std;
int main() {
 int len, i, number;
 cin >> len;
 int *a = new int[len+1];
 for(i = 1; i <= len; i++){
	 cin >> number;
	 a[number] = i;
 }
 for(i = 1; i <= len; i++){
	 cout << a[i] << ' ';
 }
 delete[] a;
 return 0;
}