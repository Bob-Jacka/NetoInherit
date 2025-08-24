#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "Rectangle.hpp"

class Square final : public Rectangle {
private:
    std::string name = "Квадрат";

    [[nodiscard]] bool check_corners() const override;

public:
    Square() = delete;

    explicit Square(int);

    ~Square() override = default;

    std::string get_name() const override;

    [[nodiscard]] bool self_check() const override;
};

#endif //SQUARE_HPP
