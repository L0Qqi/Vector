#pragma once
#include "SimplexOps.h"
//#include "SimplexSerial"
#include "Point.h"

namespace OptLib 
{	
	template<size_t dim>
	struct RawPoint
	{
		RawPoint() = default;
		RawPoint(Point<dim>&& P) :
			P{ std::move(P) } {};
		RawPoint(const Point<dim>& P) :
			P{ P } {};
		double& operator[](size_t i) 
		{
			return P[i];
		}
	//	operator Point<dim>() { return P; }
		explicit operator Point<dim>() { return P; }
		Point<dim> P;
	};
}