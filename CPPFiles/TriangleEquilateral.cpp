#include "../HeaderFiles/TriangleEquilateral.hpp"

TriangleEquilateral::TriangleEquilateral(double side) : Triangle() {
	this->calculateHeron(side, side, side);
}

TriangleEquilateral::~TriangleEquilateral(){}