/*
P2. Write a program to print the following pattern using for loops:
1
22
333
4444
55555
*/

#include <iostream>
using namespace std;

int main() {
    int range;
    cout << "Enter the range: ";
    cin >> range;
    for (int i = 1; i <= range; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
