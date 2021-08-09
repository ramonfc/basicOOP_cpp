#include "../HeaderFiles/Triangle.hpp"
#include <math.h>

Triangle::Triangle() : Polygon(){}
Triangle::~Triangle(){}

double Triangle::getArea() {
	return this->area;
}

void Triangle::setArea(double area) {
	this->area = area;
}

double Triangle::getPerimeter() {
	return this->perimeter;
}

void Triangle::setPerimeter(double Perimeter) {
	this->perimeter = perimeter;
}

void Triangle::calculateHeron(double side1, double side2, double side3) {
	double s = (side1 + side2 + side3) / 2;
	this->area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
}