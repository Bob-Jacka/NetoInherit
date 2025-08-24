#include "Triangle.hpp"

int Triangle::get_side_count() const {
    return side_count;
}

/**
 *
 * @param a len of a side
 * @param b len of b side
 * @param c len of c side
 * @param A a corner
 * @param B b corner
 * @param C c corner
 */
Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
    this->a_length = a;
    this->b_length = b;
    this->c_length = c;

    this->a_corner = A;
    this->b_corner = B;
    this->c_corner = C;
}

std::string Triangle::get_name() const {
    return this->name;
}

void Triangle::print_side_values() const {
    std::cout << "Стороны:" << " a=" << a_length << " b=" << b_length << " c=" << c_length << std::endl;
}

void Triangle::print_corners() const {
    std::cout << "Углы:" << " A=" << a_corner << " B=" << b_corner << " C=" << c_corner << std::endl;
}

[[nodiscard]] bool Triangle::self_check() const {
    return ((side_count == 3) and ((a_corner + b_corner + c_corner) == 180));
}

