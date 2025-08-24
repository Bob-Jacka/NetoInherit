#include "RectangularTriangle.hpp"

RectangularTriangle::RectangularTriangle(int a, int b, int c, int A, int B) {
    this->a_length = a;
    this->b_length = b;
    this->c_length = c;

    this->a_corner = A;
    this->b_corner = B;
    this->c_corner = 90;
}

std::string RectangularTriangle::get_name() const {
    return this->name;
}

[[nodiscard]] bool RectangularTriangle::self_check() const {
    return (Triangle::self_check() and c_corner == 90);
}
