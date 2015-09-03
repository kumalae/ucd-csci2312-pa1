#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

double computeArea(Point &A, Point &B, Point &C) {
    double a, b, c;

    a = B.distanceTo(C);
    b = A.distanceTo(C);
    c = A.distanceTo(B);

    return (1.0/4.0) * sqrt(4 * pow(a, 2) * pow(b, 2) - pow(pow(a, 2) + pow(b, 2) - pow(c, 2), 2));
}

int main(void) {
    Point points[3];
    double temp;
    double area;

    cout << "Please enter 3 points:" << endl;

    for (int i=1; i<=3; i++) {
        cout << "Point " << i << ":" << endl;
        cout << "x: ";
        cin >> temp;
        points[i-1].setX(temp);
        cout << "y: ";
        cin >> temp;
        points[i-1].setY(temp);
        cout << "z: ";
        cin >> temp;
        points[i-1].setZ(temp);
    }

    area = computeArea(points[0], points[1], points[2]);

    cout << "Thank you!  The area inside the triangle described by the three points that you just entered is: " << area  << "." << endl;
}