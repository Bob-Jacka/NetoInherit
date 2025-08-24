#ifndef RECTANGULARTRIANGLE_HPP
#define RECTANGULARTRIANGLE_HPP

#include "Triangle.hpp"

/**
 * Прямоугольный треугольник
 */
class RectangularTriangle : public Triangle {
private:
    std::string name = "Прямоугольный треугольник";

public:
    RectangularTriangle() = delete;

    ~RectangularTriangle() override = default;

    explicit RectangularTriangle(int, int, int, int, int);

    [[nodiscard]] std::string get_name() const override;

    [[nodiscard]] bool self_check() const override;
};

#endif
