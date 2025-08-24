#ifndef EQUILATERALTRIANGLE_HPP
#define EQUILATERALTRIANGLE_HPP

#include "Triangle.hpp"

/**
 * Равносторонний треугольник
 */
class EquilateralTriangle final : public Triangle {
private:
    std::string name = "Равносторонний треугольник";

public:
    EquilateralTriangle() = delete;

    ~EquilateralTriangle() override = default;

    explicit EquilateralTriangle(int);

    [[nodiscard]] std::string get_name() const override;

    [[nodiscard]] bool self_check() const override;
};

#endif
