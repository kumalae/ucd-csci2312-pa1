#include "Point.h"
#include <cmath>

// Default constructor
// Initializes the point to (0.0, 0.0, 0.0)
Point::Point() {
  x = 0.0;
  y = 0.0;
  z = 0.0;
}

// Constructor
Point::Point(double initX, double initY, double initZ) {
  x = initX;
  y = initY;
  z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
  // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
  x = newX;
}

void Point::setY(double newY) {
  y = newY;
}

void Point::setZ(double newZ) {
  z = newZ;
}

// Accessors
// Return the current values of private member variables

double Point::getX() {
  return x;
}

double Point::getY() {
  return y;
}

double Point::getZ() {
  return z;
}

// distanceTo method
// Returns the distance to another Point
double Point::distanceTo(Point newPoint) {
  return sqrt(pow(newPoint.x - x, 2) + pow(newPoint.y - y, 2) + pow(newPoint.z - z, 2));
}
