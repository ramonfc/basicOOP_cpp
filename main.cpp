#include <iostream>
#include "HeaderFiles/Global.hpp"
#include "HeaderFiles/Circle.hpp"
#include "HeaderFiles/TriangleEquilateral.hpp"
#include "HeaderFiles/Triangle.hpp"

using std::cout;
using std::cin;

int main(int argc, char *argv[])
{
	cout << "Hello world!" << "\n";
	cout << Global::PI << "\n";
	//Circle* c1 = new Circle(1.0);
	Circle c1(1.0);
	cout << c1.getPerimeter() << "\n";
	cout << c1.getArea() << "\n";

	//TriangleEquilateral t1(10);	
	Triangle* t1 = new TriangleEquilateral(10);
	cout << "Triangulo equilatero " << t1->getArea();

	delete t1;
	t1 = NULL;
	
	cin.get();
	return 0;
}