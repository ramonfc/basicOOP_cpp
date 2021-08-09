#pragma once
#include "Polygon.hpp"

class Circle : public Polygon
{
private:
    double radio;
    double area;
    double perimeter;

public:
    Circle(double radio);
    ~Circle();
    double getArea();
    double getPerimeter();
    void setArea(double area);
    void setPerimeter(double perimeter);
};