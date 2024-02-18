#pragma once

namespace SimplexOps {
    namespace UnaryOps {
        template<class Scalar>
        struct plus {
            Scalar scalar;
            plus(Scalar value) : scalar{ value } {}
            template<class T>
            T operator()(const T& rhs) { return rhs + scalar; }
        };

        template<class Scalar>
        struct minus_left {
            Scalar scalar;
            minus_left(Scalar value) : scalar{ value } {}
            template<class T>
            T operator()(const T& rhs) { return rhs - scalar; }
        };

        template<class Scalar>
        struct mult {
            Scalar scalar;
            mult(Scalar value) : scalar{ value } {}
            template<class T>
            T operator()(const T& rhs) { return rhs * scalar; }
        };

        template<class Scalar>
        struct div {
            Scalar scalar;
            div(Scalar value) : scalar{ value } {}
            template<class T>
            T operator()(const T& rhs) { return rhs / scalar; }
        };
    }
}