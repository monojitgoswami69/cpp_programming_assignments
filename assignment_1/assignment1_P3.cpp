// P3. write a program to print whether a number is pronic number or not

#include <iostream>
#include <cmath>
using namespace std;

bool isPronic(int n) {
    if (n < 0) return false; 
    int sqrt_n = floor(sqrt(n));
    return (sqrt_n * (sqrt_n + 1) == n) || ((sqrt_n - 1) * sqrt_n == n);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPronic(num)) {
        cout << num << " is a pronic number." << endl;
    } else {
        cout << num << " is not a pronic number." << endl;
    }
    return 0;
}
