#include <iostream>
using namespace std;
int main() {
    cout << "Enter a Number" << endl;
    int n;                  
    cin >> n;
    bool isPrime = true;    
    if (n <= 1) {          
        isPrime = false;    
    } else {
        for (int i = 2; i * i <= n; i++) { 
            if (n % i == 0) {              
                isPrime = false;           
                break;                     
            }
        }
    }
    if (isPrime)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;
    return 0;
}   