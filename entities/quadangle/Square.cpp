#include "Square.hpp"

Square::Square(int len) {
    this->a_length = len;
    this->b_length = len;
    this->c_length = len;
    this->d_length = len;

    this->a_corner = 90;
    this->b_corner = 90;
    this->c_corner = 90;
    this->d_corner = 90;
}

std::string Square::get_name() const {
    return this->name;
}

[[nodiscard]] bool Square::check_corners() const {
    return a_corner == 90 and b_corner == 90 and c_corner == 90 and
           d_corner == 90;
}

[[nodiscard]] bool Square::self_check() const {
    return (QuadAngle::self_check() and Square::check_corners() and
            ((a_length == b_length) and (c_length == d_length) and (a_length == c_length)));
}
