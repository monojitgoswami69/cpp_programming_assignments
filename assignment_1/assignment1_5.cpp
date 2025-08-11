// P4. Write a program in to find area and perimeter of triangle, square and rectangle by creating objects

#include <iostream>
#include <cmath>
using namespace std;

class rectangle {
    private:
        float length;
        float width;
    public:
        rectangle(float l, float w) {
            length = l;
            width = w;
        }
        float area() {
            return length * width;
        }
        float perimeter() {
            return 2 * (length + width);
        }
};

class square {
    private:
        float side;
    public:
        square(float s) {
            side = s;
        }
        float area() {
            return side * side;
        }
        float perimeter() {
            return 4 * side;
        }
};

class triangle {
    private:
        float s1;
        float s2;
        float s3;
    public:
        triangle(float a, float b, float c) {
            s1 = a;
            s2 = b;
            s3 = c;
        }
        float area() {
            float s = (s1 + s2 + s3) / 2;  
            return sqrt(s * (s - s1) * (s - s2) * (s - s3));  
        }
        float perimeter() {
            return s1 + s2 + s3;
        }
};

int main() {
    float l, w, s, b, h;
    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;
    rectangle rect(l, w);
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    cout << "Enter side of square: ";
    cin >> s;
    square sq(s);
    cout << "Area: " << sq.area() << endl;
    cout << "Perimeter: " << sq.perimeter() << endl;

    float s1, s2, s3;
    cout << "Enter sides of triangle: ";
    cin >> s1 >> s2 >> s3;
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {
        triangle tri(s1, s2, s3);
        cout << "Area: " << tri.area() << endl;
        cout << "Perimeter: " << tri.perimeter() << endl;
    } 
    else {
        cout << "Invalid triangle sides." << endl;
    }
    return 0;
}
