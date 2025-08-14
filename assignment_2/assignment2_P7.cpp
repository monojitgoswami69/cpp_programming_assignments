// P7. write a program to implement class ADD that will have 3 overloaded functions. 1st one will add two integer numbers, 2nd one will add two floating point and one integer number. 3rd one will take two complex numbers as parameter and add them.

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

class ADD {
    public:
        int add(int a, int b) {
            return a + b;
        }
        float add(float a, float b, int c) {
            return a + b + c;
        }
        Complex add(Complex c1, Complex c2) {
            return c1 + c2;
        }
};

int main() {
    ADD obj;
    int i1, i2, i3;
    float f1, f2;
    cout << "Enter two integers: ";
    cin >> i1 >> i2;
    cout << "Sum of integers: " << i1 << " + " << i2 << " = " << obj.add(i1, i2) << endl;
    cout << "Enter two floating point numbers and one integer: ";
    cin >> f1 >> f2 >> i3;
    cout << "Sum of floats and integer: " << f1 << " + " << f2 << " + " << i3 << " = " << obj.add(f1, f2, i3) << endl;
    float r, i;
    cout << "Enter real and imaginary parts of first number: ";
    cin >> r >> i;
    Complex c1(r, i);
    cout << "Enter real and imaginary parts of second number: ";
    cin >> r >> i;
    Complex c2(r, i);
    Complex c3 = obj.add(c1, c2);
    cout << "Sum: ";
    c3.display();
}