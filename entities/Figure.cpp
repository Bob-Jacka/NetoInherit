#include "Figure.hpp"

#include <iostream>

int Figure::get_side_count() const {
    return side_count;
}

/**
 * Empty method for contract
 */
void Figure::print_side_values() const {
    //
}

/**
 * Empty method for contract
 */
void Figure::print_corners() const {
    //
}

std::string Figure::get_name() const {
    return this->name;
}

[[nodiscard]] bool Figure::self_check() const {
    return this->side_count == 0;
}