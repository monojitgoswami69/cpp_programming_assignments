// P4. Write a program in to find area and perimeter of circle by creating objects

#include <iostream>
#define PI 3.1415
using namespace std;

class circle {
    private:
        float radius;
    public:
        circle(float r) {
            radius = r;
        }
        float area() {
            return PI * radius * radius;
        }
        float perimeter() {
            return 2 * PI * radius;
        }
};

int main() {
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    circle c(r);
    cout << "Area: " << c.area() << endl;
    cout << "Perimeter: " << c.perimeter() << endl;
    return 0;
}
