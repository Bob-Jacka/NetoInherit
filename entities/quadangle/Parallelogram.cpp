#include "Parallelogram.hpp"

Parallelogram::Parallelogram(int a, int b, int A, int B) {
    this->a_length = a;
    this->b_length = b;
    this->c_length = a;
    this->d_length = b;

    this->a_corner = A;
    this->b_corner = B;
    this->c_corner = A;
    this->d_corner = B;
}

std::string Parallelogram::get_name() const {
    return this->name;
}

[[nodiscard]] bool Parallelogram::self_check() const {
    return (QuadAngle::self_check() and (((a_length == c_length) and (b_length == d_length)) and
                                         ((a_corner == c_corner) and (b_corner == d_corner))));
}