#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "shape.h"

class Triangle : public Shape 
{
private:
	float _base;
	float _height;
public:
	Triangle(float base, float height);
	float get_area() const override; // Debug - removed the parameter, added override

};


#endif	// __TRIANGLE_H__
