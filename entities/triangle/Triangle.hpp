#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "../Figure.hpp"

/**
 * Базовый класс для треугольников
 */
class Triangle : public Figure {
private:
    const std::string name = "Треугольник";

protected:
    const int side_count = 3;
    int a_length{};
    int b_length{};
    int c_length{};

    int a_corner{};
    int b_corner{};
    int c_corner{};

public:

    [[nodiscard]] int get_side_count() const override;

    void print_side_values() const override;

    void print_corners() const override;

    [[nodiscard]] std::string get_name() const override;

    [[nodiscard]] bool self_check() const override;

    Triangle() = default;

    ~Triangle() override = default;

    Triangle(int, int, int, int, int, int);
};

#endif
