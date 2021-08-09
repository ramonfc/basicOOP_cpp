#include "../HeaderFiles/Circle.hpp"
#include "../HeaderFiles/Global.hpp"

Circle::Circle(double radio) : Polygon()
{
    this->radio = radio;
    double value = (2 * Global::PI * (radio * radio));
    this->setArea(value);
    this->setPerimeter(2 * Global::PI * radio);
}
Circle::~Circle() {}

double Circle::getArea()
{
    return this->area;
}

double Circle::getPerimeter(){
    return this->perimeter;
}

void Circle::setArea(double area)
{
    this->area = area;
}

void Circle::setPerimeter(double perimeter){
    this->perimeter = perimeter;
}