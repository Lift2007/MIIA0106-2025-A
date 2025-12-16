#include <iostream>
using namespace std;

// ฟังก์ชันหาพื้นที่วงกลม
double calculateCircleArea(double radius)
{
    const double PI = 3.14159;
    return PI * radius * radius;
}

// ฟังก์ชันหาพื้นที่สี่เหลี่ยม
double calculateRectangleArea(double w, double h)
{
    return w * h;
}

int main()
{
    // วงกลม
    double radius;
    cout << "กรุณากรอกค่ารัศมีของวงกลม: ";
    cin >> radius;

    double circleArea = calculateCircleArea(radius);
    cout << "พื้นที่ของวงกลม = " << circleArea << endl;

    // สี่เหลี่ยม
    double w, h;
    cout << "กรุณากรอกค่าความกว้างและความสูงของสี่เหลี่ยม: ";
    cin >> w >> h;

    double rectangleArea = calculateRectangleArea(w, h);
    cout << "พื้นที่ของสี่เหลี่ยม = " << rectangleArea << endl;

    return 0;
}
