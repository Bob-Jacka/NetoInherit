#ifndef PARALLELOGRAM_HPP
#define PARALLELOGRAM_HPP

#include "QuadAngle.hpp"

class Parallelogram : public QuadAngle {
private:
    std::string name = "Параллелограмм";

protected:
    Parallelogram() = default;

public:

    ~Parallelogram() override = default;

    Parallelogram(int, int, int, int);

    [[nodiscard]] std::string get_name() const override;

    [[nodiscard]] bool self_check() const override;
};

#endif //PARALLELOGRAM_HPP
