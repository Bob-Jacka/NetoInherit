#include "Rhomb.hpp"

Rhomb::Rhomb(int len, int A, int B) {
    this->a_length = len;
    this->b_length = len;
    this->c_length = len;
    this->d_length = len;

    this->a_corner = A;
    this->c_corner = A;
    this->b_corner = B;
    this->d_corner = B;
}

std::string Rhomb::get_name() const {
    return this->name;
}

[[nodiscard]] bool Rhomb::self_check() const {
    return (QuadAngle::self_check() and
            ((a_length == b_length == c_length == d_length) and ((a_corner == c_corner) and (b_corner == d_corner))));
}