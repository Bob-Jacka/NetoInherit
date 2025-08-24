#include "IsoscelesTriangle.hpp"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) {
    this->a_length = a;
    this->b_length = b;
    this->c_length = a;

    this->a_corner = A;
    this->b_corner = B;
    this->c_corner = A;
}

std::string IsoscelesTriangle::get_name() const {
    return this->name;
}

[[nodiscard]] bool IsoscelesTriangle::self_check() const {
    return ((Triangle::self_check()) and ((a_length == c_length) and (a_corner == c_corner)));
}
