#include <iostream>
using namespace std;

int main() {
    
    int n, i, answer;
    cin >> n;
    for( i = 0; i < n ; i++) {
        cin >> answer;
        if( answer == 1) { 
            cout << "hard";
            return 0;
        }
    }
    cout << "easy";
    return 0;
}