// P6. Write a program to add two complex numbers using objects

#include <iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    public:
        Complex(float r = 0, float i = 0) : real(r), imag(i) {}
        Complex operator + (Complex c) {
            return Complex(real + c.real, imag + c.imag);
        }
        void display() {
            if (imag > 0) {
                cout << real << " + " << imag << "i" << endl;
            } 
            else {
                cout << real << " - " << -imag << "i" << endl;
            }
        }
};

int main() {
    float r1, i1, r2, i2;
    cout << "Enter real and imaginary parts of first number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary parts of second number: ";
    cin >> r2 >> i2;
    Complex c1(r1, i1), c2(r2, i2);
    Complex c3 = c1 + c2;
    cout << "Sum: ";
    c3.display();
    return 0;
}