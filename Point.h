#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <sstream>
#include <string>
#include <ostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point();
	Point(int newX, int newY);
	Point add(const Point &);
	Point subtract(const Point &);
	string toString();
	Point operator+(const Point &);
	Point operator-(const Point &);
	friend ostream &operator<<(ostream &, const Point &);

};
#endif