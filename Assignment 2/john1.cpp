#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        
        int tens = n / 10; 
        int ones = n % 10; 
        
        cout << tens + ones << endl; 
    }
    
    return 0;
}