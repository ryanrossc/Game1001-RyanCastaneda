#pragma once

class Rectangle
{
private:
	double width;
	double length;
public:
	bool setWidth(double);
	bool setLength(double);

	double getWidth()
	{
		return width;
	}
	double getLength()
	{
		return length;
	}
	double getArea()
	{
		return width * length;
	}
	double getPerimeter()
	{
		return width + length;
	}
};

