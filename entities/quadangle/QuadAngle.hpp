#ifndef NETOINHERIT_QUADANGLE_HPP
#define NETOINHERIT_QUADANGLE_HPP

#include "../Figure.hpp"

/**
 * Базовый класс для четырехугольников
 */
class QuadAngle : public Figure {
private:
    std::string name = "Четырехугольник";

protected:
    const int side_count = 4;

    int a_length{};
    int b_length{};
    int c_length{};
    int d_length{};

    int a_corner{};
    int b_corner{};
    int c_corner{};
    int d_corner{};

public:
    [[nodiscard]] int get_side_count() const override;

    void print_side_values() const override;

    void print_corners() const override;

    [[nodiscard]] std::string get_name() const override;

    [[nodiscard]] bool self_check() const override;

public:

    QuadAngle() = default;

    ~QuadAngle() override = default;

    QuadAngle(int, int, int, int, int, int, int, int);
};

#endif
