#pragma once
#define NOMINMAX
#include <algorithm>
#include <iostream>

struct vec3f
{
	vec3f() : x(0.0f),y(0.0f),z(0.0){}
	vec3f(float x) : x(x), y(x), z(x) {}
	vec3f(float x, float y, float z) : x(x),y(y),z(z) {}

	float x, y, z;


	friend std::ostream& operator<< (std::ostream& o, const vec3f& v);
};

inline std::ostream& operator<< (std::ostream& o, const vec3f& v) {
	return o << "vec3( " << v.x << ", " << v.y << ", " << v.z << ")";
}

