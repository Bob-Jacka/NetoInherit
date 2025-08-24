#ifndef ISOSCELESTRIANGLE_HPP
#define ISOSCELESTRIANGLE_HPP

#include "Triangle.hpp"

/**
 * Равнобедренный треугольник
 */
class IsoscelesTriangle final : public Triangle {
private:
    std::string name = "Равнобедренный треугольник";

public:
    IsoscelesTriangle() = delete;

    ~IsoscelesTriangle() override = default;

    IsoscelesTriangle(int, int, int, int);

    [[nodiscard]] std::string get_name() const override;

    [[nodiscard]] bool self_check() const override;
};

#endif
