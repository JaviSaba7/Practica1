#ifndef __Point2d_H__
#define __Point2d_H__

#include <math.h>
#include <iostream>

class Point2d
{
public:

	float x, y;
	
	Point2d& operator+ (const Point2d &Point) const
	{
		Point2d Temporal;

		Temporal.x = x + Point.x;
		Temporal.y = y + Point.y;

		return(Temporal);
	}

	Point2d& operator- (const Point2d &Point) const
	{
		Point2d Temporal;

		Temporal.x = x - Point.x;
		Temporal.y = y - Point.y;

		return(Temporal);
	}

	const Point2d& operator+= (const Point2d &Point)
	{
		x += Point.x;
		y += Point.y;

		return *this;
	}

	const Point2d& operator-=(const Point2d &Point)
	{
		x -= Point.x;
		y -= Point.y;

		return *this;
	}

	bool operator==(const Point2d &point) const
	{
		return (x == point.x && y == point.y);
	}

	bool operator!=(const Point2d &Point) const
	{
		return (x != Point.x || y != Point.y);
	}

	bool IsZero() const
	{
		return x == 0.0f && y == 0.0f;
	}

	void SetZero()
	{
		x = y = 0.0f;
	}

	float DistanceTo(const Point2d &point)
	{
		return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
	}
};





#endif //__Point2d_h__