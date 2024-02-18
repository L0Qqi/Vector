#pragma once
#include "Point.h"

namespace OptLib {

    template<size_t dim>
    Point<dim> operator+(const Point<dim>& p, double a) {
        Point<dim> result;
        for (size_t i = 0; i < dim; ++i) {
            result[i] = p[i] + a;
        }
        return result;
    }

    template<size_t dim>
    Point<dim> operator-(const Point<dim>& p, double a) {
        Point<dim> result;
        for (size_t i = 0; i < dim; ++i) {
            result[i] = p[i] - a;
        }
        return result;
    }

    template<size_t dim>
    Point<dim> operator*(const Point<dim>& p, double a) {
        Point<dim> result;
        for (size_t i = 0; i < dim; ++i) {
            result[i] = p[i] * a;
        }
        return result;
    }

    template<size_t dim>
    Point<dim> operator/(const Point<dim>& p, double a) {
        Point<dim> result;
        for (size_t i = 0; i < dim; ++i) {
            result[i] = p[i] / a;
        }
        return result;
    }
}