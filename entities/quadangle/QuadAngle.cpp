#include "QuadAngle.hpp"

int QuadAngle::get_side_count() const {
    return side_count;
}

std::string QuadAngle::get_name() const {
    return name;
}

QuadAngle::QuadAngle(int a, int b, int c, int d, int A, int B, int C, int D) {
    a_length = a;
    b_length = b;
    c_length = c;
    d_length = d;

    a_corner = A;
    b_corner = B;
    c_corner = C;
    d_corner = D;
}

void QuadAngle::print_side_values() const {
    std::cout << "Стороны:" << " a=" << a_length << " b=" << b_length << " c=" << c_length << " d=" << d_length
              << std::endl;
}

void QuadAngle::print_corners() const {
    std::cout << "Углы:" << " A=" << a_corner << " B=" << b_corner << " C=" << c_corner << " D=" << d_corner
              << std::endl;
}

[[nodiscard]] bool QuadAngle::self_check() const {
    return ((side_count == 4) and ((a_corner + b_corner + c_corner + d_corner) == 360));
}
