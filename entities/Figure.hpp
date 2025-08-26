#ifndef FIGURE_HPP
#define FIGURE_HPP

#include "Shape.hpp"

/**
 * Unknown figure / interface to shapes.
 */
class Figure : Shape {
    std::string name = "Фигура";
    int side_count = 0;

public:
    Figure() = default;

    ~Figure() override = default;

    [[nodiscard]] virtual bool self_check() const;

    virtual void print_side_values() const;

    virtual void print_corners() const;

    [[nodiscard]] int get_side_count() const override;

    [[nodiscard]] std::string get_name() const override;
};

#endif //FIGURE_HPP
