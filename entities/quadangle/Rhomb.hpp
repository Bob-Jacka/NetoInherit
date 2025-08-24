#ifndef RHOMB_HPP
#define RHOMB_HPP

#include "Parallelogram.hpp"

class Rhomb final : public Parallelogram {
private:
    std::string name = "Ромб";

public:
    Rhomb() = delete;

    Rhomb(int, int, int);

    ~Rhomb() override = default;

    Rhomb(int, int, int, int, int, int, int, int);

    std::string get_name() const override;

    [[nodiscard]] bool  self_check() const override;
};

#endif //RHOMB_HPP
