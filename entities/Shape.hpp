#ifndef NETOINHERIT_SHAPE_HPP
#define NETOINHERIT_SHAPE_HPP

#include <string>
#include <iostream>
#include <bits/ostream.tcc>
#include <vector>

class Shape {
public:
    virtual ~Shape() = default;

protected:
    std::string name;
    int side_count = 0;

    [[nodiscard]] virtual std::string get_name() const = 0;

    [[nodiscard]] virtual int get_side_count() const = 0;
};

#endif
