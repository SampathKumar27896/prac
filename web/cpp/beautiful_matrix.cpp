#include<bits/stdc++.h> 
using namespace std;
int main() {

  int i, j, number, break_outer_loop, operations = 0;
  for( i = 0; i < 5; i++) {
    break_outer_loop = 0;
    for(j = 0; j < 5 ; j++){
      cin >> number;
      if( number == 1){
        break_outer_loop = 1;
        break;
      }
    }
    if(break_outer_loop == 1)
        break;
  }
  cout << abs(i - 2) + abs( j - 2);
  return 0;
}