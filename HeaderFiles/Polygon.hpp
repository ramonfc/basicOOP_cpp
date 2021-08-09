#pragma once
class Polygon
{
//protected:
//    double area;
//    double perimeter;


public:
    virtual void setArea(double area)=0;
    virtual void setPerimeter(double perimeter)=0;
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};