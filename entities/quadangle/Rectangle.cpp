#include "Rectangle.hpp"

Rectangle::Rectangle(int a, int b) {
    this->a_length = a;
    this->c_length = a;
    this->b_length = b;
    this->d_length = b;

    this->a_corner = 90;
    this->b_corner = 90;
    this->c_corner = 90;
    this->d_corner = 90;
}

std::string Rectangle::get_name() const {
    return this->name;
}

[[nodiscard]] bool Rectangle::check_corners() const {
    return (a_corner == 90 and b_corner == 90 and c_corner == 90 and
            d_corner == 90);
}

[[nodiscard]] bool Rectangle::self_check() const {
    return (QuadAngle::self_check() and (((a_length == c_length) and (b_length == d_length)) and
                                         check_corners()));
}