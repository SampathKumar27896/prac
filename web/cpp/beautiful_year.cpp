
#include<bits/stdc++.h> 
using namespace std;
int main() {
 int year, num, i, break_flag = 0, pass=0; 
 cin >> year;
 bool *digits = new bool[10];
 
 for(i = year+1; i < 9999; i++) {
	 num = i;
	 pass = 0;
	 fill_n(digits, 10, false);
	 while( num != 0) {
		 if(digits[num%10] == false)
		 	digits[num%10] = true;
		 else{
			 pass = 1;
			 break;
		 }
		num /= 10;
	 }
	 if(pass == 1)
	 	continue;
	 else
	 	break;
 }
 cout << i;
 return 0;
}