#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Parallelogram.hpp"

class Rectangle : public Parallelogram {
private:
    std::string name = "Прямоугольник";

    [[nodiscard]] virtual bool check_corners() const;

protected:
    Rectangle() = default;

public:

    ~Rectangle() override = default;

    Rectangle(int, int);

    [[nodiscard]] std::string get_name() const override;

    [[nodiscard]] bool self_check() const override;
};

#endif //RECTANGLE_HPP
