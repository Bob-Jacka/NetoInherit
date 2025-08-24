#include "EquilateralTriangle.hpp"

EquilateralTriangle::EquilateralTriangle(int len) {
    this->a_length = len;
    this->b_length = len;
    this->c_length = len;

    this->a_corner = 60;
    this->b_corner = 60;
    this->c_corner = 60;
}

std::string EquilateralTriangle::get_name() const {
    return this->name;
}

[[nodiscard]] bool EquilateralTriangle::self_check() const {
    return (Triangle::self_check() and
            ((a_length == c_length and a_length == b_length) and (a_corner == 60 and c_corner == 60 and b_corner == 60))
    );
}
