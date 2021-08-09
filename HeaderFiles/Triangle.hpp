#pragma once
#include "Polygon.hpp"

class Triangle : public Polygon
{
protected:
	double area;
	double perimeter;

public:
	Triangle();
	~Triangle();
	virtual double getArea();
	virtual double getPerimeter();
	virtual void setArea(double area);
	virtual void setPerimeter(double perimeter);
	virtual void calculateHeron(double side1, double side2, double side3);
};